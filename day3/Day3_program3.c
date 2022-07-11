//Write a program to reverse a 3-digit number which is entered from keyboard.
#include <stdio.h>
int main()
{
	int num, rem = 0,rev = 0;
	printf("Enter number");
	fflush(stdout);
	scanf("%d", &num);
	while(num != 0)
	{
		rem = num % 10;
		rev = (rev*10) + rem;
		num = num / 10;
	}
	printf("reversed number is %d",rev);

}