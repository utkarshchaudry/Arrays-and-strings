#include <iostream>
#include <string> // Include the string library

using namespace std;

int main() {
    // Example of a one-dimensional array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Array elements are: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Example of a two-dimensional array
    int matrix[2][2] = {{1, 2}, {3, 4}};

    cout << "Matrix elements are: " << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Example of a character array (C-style string)
    char charArray[] = "Hello, World!";
    cout << "Character array: " << charArray << endl;

    // Example of a string class
    string str = "Hello, C++!";
    cout << "String class: " << str << endl;

    // String operations
    string greeting = "Hello";
    string name = "Aman";

    // Concatenation
    string fullGreeting = greeting + ", " + name + "!";
    cout << "Concatenated string: " << fullGreeting << endl;

    // Find substring
    size_t pos = fullGreeting.find("Aman");
    if (pos != string::npos) {
        cout << "'Aman' found at position: " << pos << endl;
    }

    // Replace substring
    fullGreeting.replace(pos, 5, "Utkarsh");
    cout << "Modified string: " << fullGreeting << endl;

    return 0;
}
