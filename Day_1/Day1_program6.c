//Students with roll numbers 1-9 are seated in ascending order in an examination hall. There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped. Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.

#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, temp;
    printf("Enter 9 students roll numbers : ");
    scanf("%d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);
    
    loop:
    if (a1 > a2)
    {
        temp = a1;
        a1 = a2;
        a2 = temp;
        goto loop;
    }
    if (a2 > a3)
    {
        temp = a2;
        a2 = a3;
        a3 = temp;
        goto loop;
    }
    if (a3 > a4)
    {
        temp = a3;
        a3 = a4;
        a4 = temp;
        goto loop;
    }
    if (a4 > a5)
    {
        temp = a4;
        a4 = a5;
        a5 = temp;
        goto loop;
    }
    if (a5 > a6)
    {
        temp = a5;
        a5 = a6;
        a6 = temp;
        goto loop;
    }
    if (a6 > a7)
    {
        temp = a6;
        a6 = a7;
        a7 = temp;
        goto loop;
    }
    if (a7 > a8)
    {
        temp = a7;
        a7 = a8;
        a8 = temp;
        goto loop;
    }
    if (a8 > a9)
    {
        temp = a8;
        a8 = a9;
        a9 = temp;
        goto loop;
    }
    printf("After swapping : %d %d %d %d %d %d %d %d %d", a1, a2, a3, a4, a5, a6, a7, a8, a9);
    return 0;
}
