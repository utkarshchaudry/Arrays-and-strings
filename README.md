
# Experiment 7 

## Aim
To study and implement C++ Arrays and Strings

## Theory

Arrays and strings are important tools in C++ for storing and working with groups of data. An array is a collection of items, all of the same type, stored in a continuous block of memory. You can use arrays to keep track of multiple values, such as numbers or characters.

Strings in C++ can be represented using either character arrays or the `string` class from the C++ Standard Library. Character arrays are simple and straightforward, while the `string` class offers more features for manipulating strings, like adding, comparing, and searching for text.

### Arrays

1. **One-dimensional Array:** Stores a list of elements of the same type.

   **Syntax:**

   ```cpp
   data_type array_name[array_size];
   ```

2. **Multi-dimensional Array:** Stores data in rows and columns, like a table.

   **Syntax:**

   ```cpp
   data_type array_name[size1][size2]; // 2D array
   ```

### Strings

1. **Character Array:** A basic way to store strings.

   **Syntax:**

   ```cpp
   char string_name[size];
   ```

2. **`string` Class:** Provides many functions for working with strings.

   **Syntax:**

   ```cpp
   string str = "example";
   ```

## Example Code

Here is a simple example showing how to use arrays and strings in C++:

```cpp
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
    string name = "Alice";

    // Concatenation
    string fullGreeting = greeting + ", " + name + "!";
    cout << "Concatenated string: " << fullGreeting << endl;

    // Find substring
    size_t pos = fullGreeting.find("Alice");
    if (pos != string::npos) {
        cout << "'Alice' found at position: " << pos << endl;
    }

    // Replace substring
    fullGreeting.replace(pos, 5, "Bob");
    cout << "Modified string: " << fullGreeting << endl;

    return 0;
}
```

### Explanation

- **Arrays:**
  - The code shows a one-dimensional array of numbers and a two-dimensional array (matrix). The program prints out all the elements in these arrays.

- **Character Array:**
  - A character array stores and displays the text "Hello, World!".

- **string Class:**
  - The `string` class is used for easier string operations. The code demonstrates how to join strings, find a part of a string, and replace part of a string with something else.

## Conclusion

In this experiment, we learned how to use arrays and strings in C++. Arrays let us store multiple values of the same type, either in a list or a table format. Strings can be managed using either character arrays or the `string` class, which provides useful functions for handling text. These tools help us efficiently manage and manipulate collections of data and text in our programs.
