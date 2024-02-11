# Prolix 2.1.0 Release Notes

## Overview

Prolix 2.1.0 is a significant update that enhances the Prolix programming language with new features, improvements, and bug fixes. This release underscores the ongoing commitment to refining the language's functionality and providing users with a more versatile and efficient programming experience.

## Key Changes and Additions

### New Features

- **Enhanced Data Type (`userdata`)**: Introduces a new data type to save data from console results, usable by `$io:popen`.

- **Extended Input Reading Mode (`%a`)**: Allows reading all user input until EOF (end of file) is reached, providing more flexibility in user input handling.

- **Delayed Execution (`$utils:spawn`)**: Introduces a new method to delay the execution of a `group` until the program has finished.

- **Operating System Library (`os`)**: Adds a new library providing a portable way to use operating system-dependent functionality.

- **Error Handling**:
  - Overflow error when dealing with large tables or objects.
  - Memory error when a table or object is too heavy for memory.

- **Command Environment Flag (`--version`)**: Enables users to check the current version of the Prolix interpreter.

- **EOF Error Handling**: Introduces an EOF error when the interpreter encounters special characters in user input (e.g., `^Z`).

- **Package Manager**: Adds a package manager for installing and creating modules, fostering community collaboration.

### Changes

- **Whitespace Tolerance**: While writing an object, Prolix now ignores all spaces, providing more flexibility in input formatting.

- **Object ID Range Update**: Adjusts the object ID range from `0x100000` to `0xffffff`.

- **File Creation with `$io:open`**: Creates a new file if the specified file does not exist.

- **Module Import Enhancement with `require`**: The `require` statement for module import can now be an identifier instead of a string path, simplifying syntax.

### Bug Fixes

- **Negative Number Handling**: Negative numbers now throw an error if the value is "-".

- **Attribute Initialization Fix**: Resolves an issue where the special attribute `__index__` could not initialize class attributes.

- **Math Library Fixes**: Addresses issues with the `math` library for methods that don't exist, providing better error handling.

- **Floating Point Precision**: Fixes floating-point number precision issues (e.g., `0.1 + 0.2 = 0.3`).

- **Improved Error Handling**: Refines method argument handling, ensuring compatibility between C `GArray` and Prolix tables.

- **Require Statement Enhancements**: The `require` statement can now import modules from executable paths and file paths.

## Other Improvements

- **Class Attribute Flexibility**: Class attribute values can now be a table.

- **Empty Group Handling**: An empty `group` will now be ignored instead of doing nothing.

- **Type Assignment**: Setting type `group` to an object attribute or table now throws a more informative error instead of causing an end-of-expression (eoe) error.

- **Interpreter Performance**: Prolix's execution speed has been upgraded, providing approximately 30% faster performance than the previous version.

These release notes provide an overview of the changes and improvements introduced in Prolix 2.1.0. For detailed information, refer to the official Prolix documentation or release notes provided by the Prolix development team.
