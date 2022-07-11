5 balls are numbered with random 1-digit number each. Assign these numbers using user input. Print whether each ball is assigned odd or even number.
#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5;
    printf("Enter 5 random 1 digit numbers :");
    scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
  
    //checking each number is even or odd
    ((a1 % 2) == 0) ? printf("1st ball num even\n") : printf("1st ball num odd\n");
    ((a2 % 2) == 0) ? printf("2nd ball num even\n") : printf("2nd ball num odd\n");
    ((a3 % 2) == 0) ? printf("3rd ball num even\n") : printf("3rd ball num odd\n");
    ((a4 % 2) == 0) ? printf("4th ball num even\n") : printf("4th ball num odd\n");
    ((a5 % 2) == 0) ? printf("5th ball num even\n") : printf("5th ball num odd\n");
    return 0;
}