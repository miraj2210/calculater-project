# 🧮 Simple Calculator in C

A simple **menu-driven calculator program written in C** using **user-defined functions**, `switch-case`, and a `do-while` loop.

The program allows the user to perform basic arithmetic operations such as **addition, subtraction, multiplication, division, and modulus**.

---

## 📌 Features

* ➕ Addition of two numbers
* ➖ Subtraction of two numbers
* ✖️ Multiplication of two numbers
* ➗ Division of two numbers
* `%` Modulus operation
* 🔄 Menu repeats until the user chooses Exit
* ⚠️ Checks for division by zero
* 🧩 Uses separate functions for each mathematical operation

---

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Concepts Used:**

  * Functions
  * `switch-case`
  * `do-while` loop
  * `if-else`
  * User input using `scanf()`
  * Output using `printf()`



---

## 🔍 How the Program Works

### 1. Functions

The program creates separate functions for each operation:

| Function | Operation      |
| -------- | -------------- |
| `add()`  | Addition       |
| `sub()`  | Subtraction    |
| `mul()`  | Multiplication |
| `div()`  | Division       |
| `mod()`  | Modulus        |

For example:

```c
int add(int a, int b)
{
    return a + b;
}
```

This function receives two integers and returns their sum.

---

### 2. Menu

The program displays a menu:

```text
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit
```

The user enters a choice to select an operation.

---

### 3. `switch-case`

The `switch` statement checks the user's choice.

```c
switch (choice)
{
    case 1:
        // Addition
        break;

    case 2:
        // Subtraction
        break;

    case 3:
        // Multiplication
        break;
}
```

Each case calls the appropriate function.

---

### 4. Division by Zero

Division by zero is not allowed, so the program checks:

```c
if (b == 0)
{
    printf("b must be greater than 0");
}
```

If the second number is `0`, division is not performed.

---

### 5. `do-while` Loop

The calculator continues displaying the menu until the user selects:

```text
0 for exit
```

The loop is controlled by:

```c
do
{
    // calculator operations
}
while (choice != 0);
```

---

## ▶️ How to Run

### Step 1: Install a C Compiler

You can use:

* GCC
* MinGW
* Code::Blocks
* Dev-C++
* Visual Studio Code with a C compiler

### Step 2: Save the File

Save the program as:

```text
calculator.c
```

### Step 3: Compile

Using GCC:

```bash
gcc calculator.c -o calculator
```

### Step 4: Run

On Windows:

```bash
calculator
```

On Linux/macOS:

```bash
./calculator
```

---

## 🖥️ Example Output

```text
press 1 for +
press 2 for -
press 3 for *
press 4 for /
press 5 for %
press 0 for exit

enter your choice: 1

enter the first number: 20
enter the second number: 10

Addition of 20 and 10 is 30
```

Another example:

```text
enter your choice: 3

enter the first number: 8
enter the second number: 5

Multiplication of 8 and 5 is 40
```

---

## 📚 Concepts Learned

This project demonstrates the following C programming concepts:

* Variables and data types
* Functions
* Function parameters and return values
* `do-while` loop
* `switch-case`
* Conditional statements
* Arithmetic operators
* User input and output
* Basic error handling

---

