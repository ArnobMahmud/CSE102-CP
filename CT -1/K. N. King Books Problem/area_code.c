/*
    Author : Arnob Mahmud

    mail : arnob.tech.me@gmail.com
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int area_code;

    printf("Enter area code :\n");
    scanf("%d", &area_code);

    switch (area_code)
    {
    case 229:
        printf("Albany\n");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta\n");
        break;
    case 478:
        printf("Macon\n");
        break;
    case 706:
    case 762:
        printf("Columbus\n");
        break;
    case 912:
        printf("Savannah\n");
    default:
        printf("Invalid.\n");
        break;
    }

    return 0;
}