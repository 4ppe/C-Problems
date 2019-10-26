# PROGRAMMING EXAMPLE: CLASSIFY NUMBERS

In this example, using functions we rewrite the program that determines the number of odds and evens from a given list of integers. 

* The main algorithm remains the same:
1. 	Initialize variables, zeros, odds, and evens to 0.
2. 	Read a number.
3. 	If the number is even, increment the even count, and if the number is also zero, increment the zero count; else increment the odd count.
4. Repeat Steps 2 and 3 for each number in the list.

* To simplify the function main and further illustrate parameter passing, the program includes
    * A function, initialize, to initialize the variables, such as zeros, odds, and evens.
    * A function, getNumber, to get the number.
    * A function, classifyNumber, to determine whether the number is odd or even (and whether it is also zero). This function also increments the appropriate count.
    * A function, printResults, to print the results.
