[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/9bBrcX9C)
# CS1: Lab 3

## Setup
1. Update the contents of *ID.txt* with your identifier (school email **without @school.edu**).
2. Write pseudocode for your program in *PSEUDO.txt*.

## How to Run Your Program
* [**WINDOWS**] In VSCode, press the play button in the top right corner (it should appear when you open a `.cpp` file). Your program should compile and run.
* [**MAC/LINUX**] Open a Terminal. Type `make` and press return. Your program should compile and run.

## Assignment Specification
### Bob's Fruits
* Implement this program in `main.cpp`.
* Write a program that creates invoices for a vendor called “Bob’s Fruits.”
* The vendor sells three types of fruits: oranges, bananas, and apples.
   - Oranges cost $0.90, bananas cost $0.75, and apples cost $0.65.
   - Every day, Bob’s inventory has 100 oranges, 120 bananas, and 80 apples.
* For each type of fruit, prompt the user for an integer quantity to purchase.
   - If any of the quantities is less than zero, or greater than Bob’s inventory, print an appropriate error message.
* Output a formatted invoice (see example runs below).
   - Money values should be formatted to two decimal places and include a dollar sign.

#### Example 1
```
Welcome to Bob’s Fruits!
How many oranges would you like to buy?: 10
How many bananas would you like to buy?: 24
How many apples would you like to buy?: 12

                 Bob’s Fruits Invoice
—----------—-------------------------
       10 oranges @$0.90 each = $9.00
      24 bananas @$0.75 each = $18.00
        12 apples @$0.65 each = $7.80
—------------------------------------
                       Total = $34.80
```

#### Example 2
```
Welcome to Bob’s Fruits!
How many oranges would you like to buy?: 125
How many bananas would you like to buy?: 4
How many apples would you like to buy?: 6

Sorry! We don’t have enough inventory to process that order.
```

#### Example 3
```
Welcome to Bob’s Fruits!
How many oranges would you like to buy?: 200
How many bananas would you like to buy?: -24
How many apples would you like to buy?: 9

Sorry! That input is invalid. We are unable to process the order.
```

## Submission
1. Remember to *commit* and *push* your changes to this repository.
