# hello-lab

A small C++ program that prints "Hello, World" in seven languages. It is the deliverable for the CS3310 source control lab, and it shows how a project's history is built up one commit at a time.

## Requirements

- A C++17 compiler (`g++` or `clang++`)
- A terminal and font that support UTF-8 (needed for Greek, Japanese, and Chinese text)

## Build and Run

```bash
g++ -std=c++17 -Wall -o hello hello.cpp
./hello
```

## Output

If the Greek, Japanese, or Chinese lines show `?` or boxes, switch your terminal to UTF-8 and use a font that includes those characters.

## Project Layout

| File | Purpose |
|---|---|
| `hello.cpp` | The program source. |
| `.gitignore` | Keeps compiled output (`hello`, `*.exe`, `*.o`) out of the repository. |
| `README.md` | This file. |

## Author

©2016 Richard Lesh ([@richlesh](https://github.com/richlesh))

Created for CS3310 Application Security Practices.
