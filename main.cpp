#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Contact {
    string name;
    string phoneNumber;
};
void addContact() {
    Contact newContact;
    cout << "Enter name: ";
    cin >> newContact.name;
    cout << "Enter phone number: ";
    cin >> newContact.phoneNumber;

    ofstream outFile("contacts.txt", ios::app); // Open file in append mode
    if (outFile.is_open()) {
        outFile << newContact.name << " " << newContact.phoneNumber << endl;
        cout << "Contact added successfully!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }
    outFile.close();
}
void viewContacts() {
    ifstream inFile("contacts.txt");
    if (inFile.is_open()) {
        Contact tempContact;
        cout << "Contacts:" << endl;
        while (inFile >> tempContact.name >> tempContact.phoneNumber) {
            cout << "Name: " << tempContact.name << ", Phone: " << tempContact.phoneNumber << endl;
        }
    } else {
        cout << "No contacts found or error opening file!" << endl;
    }
    inFile.close();
}
void searchContact() {
    string searchName;
    cout << "Enter name to search: ";
    cin >> searchName;

    ifstream inFile("contacts.txt");
    if (inFile.is_open()) {
        Contact tempContact;
        bool found = false;
        while (inFile >> tempContact.name >> tempContact.phoneNumber) {
            if (tempContact.name == searchName) {
                cout << "Contact found: " << tempContact.name << ", Phone: " << tempContact.phoneNumber << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Contact not found!" << endl;
        }
    } else {
        cout << "Error opening file!" << endl;
    }
    inFile.close();
}
void deleteContact() {
    string deleteName;
    cout << "Enter name to delete: ";
    cin >> deleteName;

    ifstream inFile("contacts.txt");
    ofstream tempFile("temp.txt");

    if (inFile.is_open() && tempFile.is_open()) {
        Contact tempContact;
        bool found = false;
        while (inFile >> tempContact.name >> tempContact.phoneNumber) {
            if (tempContact.name != deleteName) {
                tempFile << tempContact.name << " " << tempContact.phoneNumber << endl;
            } else {
                found = true;
            }
        }
        inFile.close();
        tempFile.close();

        if (found) {
            remove("contacts.txt");
            rename("temp.txt", "contacts.txt");
            cout << "Contact deleted successfully!" << endl;
        } else {
            remove("temp.txt");
            cout << "Contact not found!" << endl;
        }
    } else {
        cout << "Error opening file!" << endl;
    }
}
int main()
{
    int choice;
    do {
        cout << "\nTelephone Directory\n";
        cout << "1. Add Contact\n";
        cout << "2. View Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                viewContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);
    return 0;
}