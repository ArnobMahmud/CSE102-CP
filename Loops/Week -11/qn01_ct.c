/*  Qn :
    Write a c program to input the value of N and print the sum of the following series:

        9^-1 + 98^−1 + 997^−1 + 9996^−1 + . . . + Nth term

                Sample Input      Sample Output
                    5               0.122533
*/

/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n, num;
    float sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        num = pow(10, i) - i;
        sum += (1.0 / num);
    }

    printf("%f", sum);

    return 0;
}
