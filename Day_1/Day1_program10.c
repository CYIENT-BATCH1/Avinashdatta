/Consider the weights of three people as user input. Find the heaviest among them and print it.
#include <stdio.h>
int main()
{
    int a1, a2, a3;
   read 3 weights
    printf("Enter three persons weights : ");
    scanf("%d %d %d", &a1, &a2, &a3);
    if ( (a1 > a2) && (a1 > a3) )
    {
        printf("1st person heaviest");
    }
    else if ( (a2 > a1) && (a2 > a3) )
    {
        printf("2nd person heaviest");
    }
    else if ( (a3 > a1) && (a3 > a3) )
    {
        printf("3rd person heaviest");
    }
    else
    {
        printf("3 are Equal in weight");
    }
    return 0;
}