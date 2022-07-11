//A message is encoded in the form of numbers and sent to you. Write a program to decode the message. (HINT: A=1, B=2, … so on) 

#include <stdio.h>

int main()
{
    int i = 0;
    char str[100];
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            i++;
            continue;
        }
        printf("%c", str[i] + 48);
        i++;
    }
    return 0;
}