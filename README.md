# HW02: Review of Random and Prime Numbers

## Kyle Larson

![hw02](https://github.com/saddleback-college-cs1b/hw02-prime-rand-review-larsonkyle/actions/workflows/hw02_tests.yml/badge.svg)


## Problem Statement

Write a program that uses a random number generator to generate a two-digit positive integer and allows the user to perform one or more of the following operations:

 - a. Double the number.
 - b. Reverse the digits of the number.
 - c. Raise the number to the power of 2, 3, or 4.
 - d. Sum the digits of the number.
 - e. If the number is a two-digit number, then raise the first digit to the power of the second digit.
 - f. If the number is a three-digit number and the last digit is less than or equal to 4, then raise the first tow digits to the power of the last digit.

 After performing an operation if the number is less than 10, add 10 to the number. Also, after each operation determine if the number is prime.

 Each successive operation should be performed on the number generated by the last operation. Your program should not contain any global variables and each of these operations must be implemented by a separate function. Also your program should be menu driven.

## Files to work on
- `src/gen_number.h`
- `src/gen_number.cpp`
- `src/print_menu.h`
- `src/print_menu.cpp`
- `src/post_process.h`
- `src/post_process.cpp`
- `src/hw02.cpp`
- `src/Makefile`
- `src/hw02.scr`

### `src/gen_number.h` should contain the following function prototypes:
- `int generateNum()`
- `int doubleNum(int num)`
- `int reverseDigit(int num)`
- `int sumDigits(int num)`
- `int raisePow2_3_4(int num, int exp)`
- `int raiseFirstDigitPowSecondDigit(int num)`
- `int raiseFirstAndSecondDigitPowThirdDigit(int num)`

### `src/print_menu.h` should contain the following function prototype:
- `void print_menu()`

### `src/post_process.h` should contain the following function prototypes:
- `bool isNumPrime(int num);`
- `int addTen(int num);`

## Compiling and Running the Program
To run the program first compile the function definition files `gen_number.cpp`, `print_menu.cpp`, and `post_process.cpp` and save the object files as `gen_number.o`, `print_menu.o`, and `post_process.o`. Then you must link the file to the driver `hw02.cpp` main function that you used to test whether your code works by typing the following shell commands:

`g++ hw02.cpp -o hw02 gen_number.o print_menu.o, post_process.o`

This will compile your `hw02.cpp` and will save the executable as `hw02` in the same directory. Notice that `hw02.cpp` will depend on the function definitions in `gen_number.cpp`, `print_menu.cpp`, and `post_process.cpp` so as you develop your code make changes to these files you will need to recompile.

Note: avoid redundant `#include` statements.

## MakeFile
Create a Makefile to make recompilation and cleaning out of files easier. Follow instructions laid out in class. The `Makefile` must be located in `src`. Do not delete or change any other code in the repository as it is necessary to run test cases in github actions.

## Script Generation

While in the `src` directory, use the command `script` followed by the name of the file `hw02.scr` to capture your interaction compiling and running your program as shown:

`make all`

`./hw02`

`ls -l`

`make clean`

`exit`

## Sample Run
```
The two digit number is: 24
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
1
48 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
3

Enter power (2, 3, or 4): 2

2304 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
2

4032 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
4

9 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
1

38 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
5

6561 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
4

18 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
1

36 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
1

72 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
1

144 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
6

38416 is not prime.
1: Enter 1 to double the number.
2: Enter 2 to reverse the digits of the number.
3: Enter 3 to raise the number to the power of 2, 3, or 4.
4: Enter 4 to sum the digits of the number.
5: Enter 5 to raise the first digit to the power of the second digit.
6: Enter 6 to raise the first two digits the power of the last digit.
9: Enter 9 to terminate the program.
9
```

## NOTE
- It is required that you add your name and github actions workflow badge to your readme.
- Check the logs from github actions to verify the correctness of your program.
- The initial code will not necessarily compile. You will have to write the necessary code.
- Commit all changes as you develop the code in your individual private repo. Please provide descriptive commit messages and push from local to your repository. If you do not stage, commit, and push git classroom will not receive your code at all.
- Make sure your last push is before the deadline. Your last push will be considered as your final submission.
- There is no partial credit for code that does not compile
- If you need to be considered for partial grade for any reason(failing tests on github actions,etc). Then message the staff on Canvas before the deadline. Late requests may not be considered.

## References
https://docs.github.com/en/actions/monitoring-and-troubleshooting-workflows/adding-a-workflow-status-badge
