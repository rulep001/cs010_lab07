# CS 10 - Lab 7: Functions

## Overview
As always, all your code must follow the class style guide ‐ correct indentation, spaces around all operators, meaningful variable names, etc.

In particular, now that your programs are starting to get a little more complex, you must pay attention to clearly commenting your code: each "conceptual block" of code should have a brief comment describing its purpose.

## Exercise 1
As with all programs that utilize random numbers, you must seed the random number generator once and only once. If you are comparing to the results shown in example you should seed with srand(433) but if you are turning into R'Sub, you should use srand(time(0)).

Recall, to use the random number function, rand(), we must include the C Standard Library: `#include <cstdlib>`

A note to those not working within C9. The random numbers generator by different systems (Windows, Linux, OS X) may be different as the implementation for generating pseudo random numbers is not exactly the same, so if you are developing outside C9 and are not getting precisely the displayed example, try either running on C9 or submitting to R'Sub.

Your task is to write a function. The function must fill the following requirements:
* name: genRandInt
* return type: integer
* parameters: two integers (order matters)
    * first the smallest number in the range of random numbers
    * then the largest number in the range of random numbers

Your exercise should:
* Invoke your function multiple times, storing the returned result.
* Use a single variable to store the result of your function invocation. Simply update the variable and output the result prior to the next invocation.
* Use the key phrase "Random number" to preface your output results, as shown below.

## Exercise 2
our goal is to write a program that simulates a coin toss. You SHOULD utilize the function you wrote in exercise 1 to generate the random integers required to simulate the coin toss.

As with all programs that utilize random numbers, you must seed the random number generator once and only once. If you are comparing to the results shown in example you should seed with srand(433) but if you are turning into R'Sub, you should use `srand(time(0))`.

A note to those not working within C9. The random numbers generated by different systems (Windows, Linux, OS X) may be different as the implementation for generating pseudo random numbers is not exactly the same, so if you are developing outside C9 and are not getting precisely the displayed example, try either running on C9 or submitting to R'Sub.

Inside a loop, continue tossing a coin until the user responds "no" to the question, as shown below. For our purposes we will only allow two possible values to be generated; heads will be the value 1 and tails will be the value 2.

Your exercise should:
* Invoke your function multiple times, storing the returned result.
* Use a single variable to store the result of your function invocation.
* Use the key phrase "Flip" to preface your coin toss result, as shown below.

## Known Bugs
No currently known bugs!
