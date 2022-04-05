/*  Qn :
    Each new term in the Fibonacci sequence is generated by adding the previous two terms.
    By starting with 1 and 2,the first 10 terms will be:
            1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
    By considering the terms in the Fibonacci sequence
    whose values do not exceed the input integer, find the sum of the even-valued terms.

             Sample input         Sample output
                100                     44

*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a = 1, b = 2, c = 0, sum = 0, n;

    scanf("%d", &n);

    do
    {
        printf("%d ", a);

        if (b % 2 == 0)
        {
            sum += b;
        }

        c = a + b;
        a = b;
        b = c;

    } while (c <= n);

    printf("\n%d", sum);

    return 0;
}
