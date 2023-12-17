# Sin(x * PI) Series Expansion

This C program calculates the series expansion for sin(x * PI) using a specified number of terms (k) in the expansion. The program prompts the user to input values for 'x' and 'k' and then computes and displays the approximations for sin(x * PI) for each term in the series.

## Prerequisites
- The program is written in C and requires a C compiler to build and run.

## Build and Run
1. Ensure you have a C compiler installed.
2. Compile the program using a C compiler of your choice (e.g., `gcc`).
    ```bash
    gcc your_file_name.c -o sin_series
    ```
3. Run the compiled executable.
    ```bash
    ./sin_series
    ```

## Usage
1. The program prompts the user to enter values for 'x' and 'k'.
2. Input format: `<x>,<k>`. For example, to input x=2.5 and k=5, type `2.5,5` and press Enter.
3. The program calculates and displays the approximations for sin(x * PI) for each term up to 'k'.
4. The principal value of sin(x * PI) is also displayed.

## Function Descriptions

### `double sine(double alpha, int n)`
Calculates the approximation of sin(x * PI) using the series expansion up to the nth term.

### `double toRadian(double angle)`
Converts the given angle from degrees to radians.

### `float principalValue(double angle)`
Computes the principal value of the given angle in the range [0, 2) by wrapping it within this range.

## Input Validation
The program checks if the input 'k' is greater than or equal to 0. If 'k' is invalid, the user is prompted to retry.

## Example Output
```plaintext
Series expansion for sin(x * PI) with k > 0 terms.
Please enter <x>, <k>: 2.5,5

Approximations of sin(2.50 * pi):
K = 1: sin(x * pi) = -2.450587
K = 2: sin(x * pi) = -4.460670
K = 3: sin(x * pi) = -5.067778
K = 4: sin(x * pi) = -5.273602
K = 5: sin(x * pi) = -5.338582
Principal value: 0.50 * pi
```

Feel free to use and modify this code as needed for your projects.
