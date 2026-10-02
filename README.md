# 🖥️ C Programming: From Basics to Logic Building

A comprehensive repository documenting my journey of mastering the C programming language. This collection includes daily practice code, core concept algorithms, and interactive command-line software built entirely from scratch.

## 📂 Repository Structure

The code is organized systematically, progressing from foundational syntax to complex logic and memory management. 

*   **`Basics/`**: Data types, variables, input/output operations (`printf`, `scanf`), and operators.
*   **`Control_Flow/`**: Conditional statements (`if-else`, `switch`) and looping mechanisms (`for`, `while`, `do-while`).
*   **`Arrays_and_Strings/`**: 1D and 2D arrays, matrix mathematics, string manipulation utilities (`string.h`, `strcspn`, `fgets`), and input buffer clearing.
*   **`Functions/`**: Modular programming, return types, variable scope, and recursion.
*   **`Pointers/`**: Memory addresses, pointer arithmetic, and pass-by-reference mechanics.
*   **`Mini_Projects/`**: Full implementations combining the above concepts. (See featured projects below).

## 🚀 Featured Mini-Projects

### 1. 🎮 Interactive CLI Tic-Tac-Toe
A fully functional, 2-player text-based game engine. 
*   **Tech Highlights:** Replaces rigid `if-else` blocks with a dynamic mathematical formula `[(pos-1)/3][(pos-1)%3]` to instantly map 1-9 user input to a 3x3 2D array. Features automated win/draw detection loops and cheat-proof grid validation.

### 2. 🚌 Terminal Bus Booking System
A command-line seat reservation tool for managing passenger bookings.
*   **Tech Highlights:** Utilizes array state tracking to prevent seat overwriting and provides real-time UI updates of available versus booked seats.

## 🛠️ Tech Stack & Environment
*   **Language:** C
*   **Development Environment:** Visual Studio Code
*   **Compiler:** GCC (GNU Compiler Collection)

## ⚡ Quick Start

To test any file in this repository, clone it locally and compile using GCC:

```bash
git clone [https://github.com/yourusername/C-Language-Journey.git](https://github.com/yourusername/C-Language-Journey.git)
cd C-Language-Journey/Mini_Projects
gcc tic_tac_toe.c -o game
./game
