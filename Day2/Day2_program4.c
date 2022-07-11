//Kishore bought ‘n’ number of lottery tickets. His lucky number is 3 so he wants to separate all the tickets that have the number 3 in them. Find how many such lucky tickets are found in the ‘n’ number of tickets purchased by Kishore.
#include <stdio.h>
int main()
{
    int count = 0, num, i, last,num2;
    printf("Enter number : ");
    fflush(stdout);
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        num2 = i;//copying num to another variablr
        while(num2 != 0)
        {
            last = num2 % 10;
            if (last == 3)
            {
                count++;
                break;
            }
            num2 = num2 / 10;
        }
    }

    printf("number of threes in given number : %d", count);
    return 0;
}