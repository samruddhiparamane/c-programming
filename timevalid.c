#include <stdio.h>
int main()
{
    int h, m, s;
    printf("enter hours");
    scanf("%d", &h);
    printf("enter minutes");
    scanf("%d", &m);
    printf("enter seconds");
    scanf("%d", &s);
    if (h >= 0 && h < 24)
    {
        if (m >= 0 && m < 60)
        {
            if (s >= 0 && s < 60) 
                printf("time is valid");
            else
                printf("seconds are invalid");
        }
        else
            printf("minutes are invalid");
    }else
    printf("hours are invalid");
        return 0;
    }

