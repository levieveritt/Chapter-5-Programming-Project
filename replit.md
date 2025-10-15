# Cookie Recipe Calculator

## Overview
A simple C++ command-line program that calculates the amount of ingredients needed to make a specific number of cookies. The program uses a base recipe for 48 cookies and scales the ingredients proportionally.

## Base Recipe (48 cookies)
- 1.5 cups of sugar
- 1 cup of butter
- 2.75 cups of flour

## Project Structure
- `cookie_calculator.cpp` - Main program file containing the calculator logic
- `cookie_calculator` - Compiled executable

## How to Run
Compile the program with: `clang++ -o cookie_calculator cookie_calculator.cpp`
Run the program with: `./cookie_calculator`

The program will prompt you for the number of cookies you want to make. You can enter whole numbers (e.g., 96) or decimal values (e.g., 12.5).

## Recent Changes
- **October 15, 2025**: Initial project setup and conversion to C++
  - Created cookie recipe calculator program in Python
  - Converted from Python to C++
  - Installed C++ (Clang) toolchain
  - Set up project files and gitignore
  - Implemented decimal input support
  - Implemented proportional ingredient calculation with 2 decimal precision

## Technical Details
- Language: C++ (compiled with Clang)
- No external dependencies required
- Uses standard input/output for user interaction
- Supports decimal input for precise recipe scaling
- Displays all measurements with 2 decimal places
