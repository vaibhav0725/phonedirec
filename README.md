# Telephone Directory in C++

A simple **Telephone Directory** program implemented in C++ using file handling. This project allows users to manage contacts by adding, viewing, searching, and deleting them. The contacts are stored in a file (`contacts.txt`) for persistence.

---

## Features

- **Add Contact**: Add a new contact with a name and phone number.
- **View Contacts**: Display all saved contacts.
- **Search Contact**: Search for a contact by name.
- **Delete Contact**: Delete a contact by name.
- **File Handling**: Contacts are stored in a file (`contacts.txt`) for persistence.

---

## How to Use

### Prerequisites
- A C++ compiler (e.g., `g++`).
- Basic knowledge of running C++ programs.

### Steps to Run the Program

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/vaibhav0725/phonedirec.git
   cd telephone-directory-cpp
   ```

2. **Compile the Program**:
   ```bash
   g++ telephone_directory.cpp -o telephone_directory
   ```

3. **Run the Program**:
   ```bash
   ./telephone_directory
   ```

4. **Follow the Menu**:
   - Use the menu to add, view, search, or delete contacts.
   - Exit the program when done.

---

## Code Structure

- **`telephone_directory.cpp`**: The main C++ program file.
- **`contacts.txt`**: The file where contacts are stored (automatically created when you add a contact).

---

## Example Usage

### Adding a Contact
```
Telephone Directory
1. Add Contact
2. View Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 1
Enter name: John
Enter phone number: 1234567890
Contact added successfully!
```

### Viewing Contacts
```
Telephone Directory
1. Add Contact
2. View Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 2
Contacts:
Name: John, Phone: 1234567890
```

### Searching for a Contact
```
Telephone Directory
1. Add Contact
2. View Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 3
Enter name to search: John
Contact found: John, Phone: 1234567890
```

### Deleting a Contact
```
Telephone Directory
1. Add Contact
2. View Contacts
3. Search Contact
4. Delete Contact
5. Exit
Enter your choice: 4
Enter name to delete: John
Contact deleted successfully!
```

---

## File Handling

- The program uses a text file (`contacts.txt`) to store contacts.
- Each contact is stored as a line in the file, with the name and phone number separated by a space.
- The file is automatically created when you add your first contact.

---

## Contributing

Contributions are welcome! If you find any issues or want to enhance the project, feel free to:
1. Fork the repository.
2. Create a new branch (`git checkout -b feature/YourFeatureName`).
3. Commit your changes (`git commit -m 'Add some feature'`).
4. Push to the branch (`git push origin feature/YourFeatureName`).
5. Open a pull request.

---

## Author

[Your Name](https://github.com/vaibhav0725)

---

## Acknowledgments

- Inspired by basic file handling and data management concepts in C++.
- Thanks to the C++ community for resources and support.

---