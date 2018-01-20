
##Task

This program checks to see if an integar is an armstrong number or not. A positive integer is called an Armstrong number if the sum of cubes of individual digit is equal to that number itself.

##Summary

This program was built using c++ and I chose to use Visual Studio to accomplish this task due to its powerful developer tooling.

##Functionality

In the program, a positive integer is asked to enter by the user which is stored in the variable origNum. Then, the number is copied to another variable num. This is done because we need to check the origNum at the end. Inside the while loop, last digit is separated from num by the operation digit = num % 10;. This digit is cubed and added to the variable sum. Now, the last digit is discarded using the statement num /= 10;. In the next cycle of while loop, second last digit is separated, cubed and added to sum. This continues until no digits are left in num. Now, the total sum sum is compared to the original number origNum. If the numbers are equal, the entered number is an Armstrong number. If not, the number isn't an Armstrong number.

##Tech Stack

C++, Visual Studio
