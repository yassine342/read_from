# File Reader in C

A simple file-reading program written in C using low-level system calls.

## Description

This project demonstrates how to read the contents of a file using the `open()` and `read()` system calls.

It reads the file in chunks of 50 bytes, dynamically allocates memory to store the content, and joins each chunk using a custom `ft_strjoin()` function.

## Functions

| Function | Description |
|---|---|
| `ft_strlen()` | Calculates the length of a string. |
| `ft_strjoin()` | Concatenates two strings into a newly allocated string. |
| `read_file()` | Reads the content of a file using its file descriptor. |
| `get_file_content()` | Opens a file, reads its content, and closes it. |
| `print_file()` | Displays the file content on standard output. |

## Compilation

Compile the source file using:

```bash
cc -Wall -Wextra -Werror file_reader.c -o file_reader
```

## Usage

Call `get_file_content()` with the path of the file you want to read:

```c
char *content;

content = get_file_content("test.txt");
if (!content)
    return (1);
print_file(content);
free(content);
```

## Allowed System Calls

- `open()`
- `read()`
- `close()`
- `write()`
- `malloc()`
- `free()`

## Concepts Practiced

- File descriptors
- File handling in C
- Dynamic memory allocation
- Reading files in chunks
- String manipulation
- Memory management

## Author

Yassine Ait Sahel