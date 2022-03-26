/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp = 0, rem = 0, oct = 0, i = 1;

    printf("Enter a decimal number : ");
    scanf("%d", &num);

    temp = num;

    while (num != 0)
    {
        rem = num % 8;
        num /= 8;
        oct += rem * i;
        i *= 10;
    }

    printf("%d in octal is %d.", temp, oct);

    return 0;
}