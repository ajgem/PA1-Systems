/*Write a program that takes a single integer n as a command-line argumentand finds its prime factors, excluding 1.  
The output should consist of a single line listing each prime factor in non-decreasing order, separated by a space. 
If n is prime, just print n itself. If there are repeat factors, print the factor as many times as it divides n. 
You can assume that2≤n≤231−1(i.e.,n will fit in a signed 32-bit integer).

Take an input as the commane line 
    //use argv and atoi to get the input and place into function factor 
creating factor.c 
    // find the prime factors 
    // use math.h to find the dividends 
    // for loop to print out 
output 
    // increasing order such as 13, 17 
    // if n is prime print out n 
    // if factors are repeated then print them out as many times needed // 32 = 2 2 2 2 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
// prints factors of prime
void factorCheck(signed int x)
{
    while (x % 2 == 0)
    {
        printf("%d ", 2);
        x = x / 2;
    }
 // n is now odd so find the sqrt using math.h
    for (int i = 3; i <= sqrt(x); i = i + 2)
    {
        // while n is not leaving a reminder print out i 
        while (x % i == 0)
        {
            printf("%d ", i);
            x = x / i;
        }
    }
}
 // driver for test cases
int main()
{
    signed int x;
    scanf("%d", &x);
    factorCheck(x);
    return EXIT_SUCCESS;
}
