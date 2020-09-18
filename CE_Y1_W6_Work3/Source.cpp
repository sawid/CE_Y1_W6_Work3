#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year < 1000 || year > 3000)
    {
        printf("%4d is NOT in the range (1000-3000)", year);
    }
    else
    {
        if (year % 4 == 0) {
            if (year / 100 == 0 && year / 400 != 0) {
                printf("%d is a common year.", year);
            }
            else {
                printf("%d is a leap year.", year);
            }
        }
        else {
            printf("%d is a common year.", year);
        }
    }

    return 0;
}