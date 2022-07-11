// consider the phone number of a person as user input and find the sum of its digits. 
#include<stdio.h>

int main()
{
	long int num;
	printf("Enter phone number : ");
	scanf("%ld", &num);
	int sum;
	while(num != 0)
	{
		sum = sum + (num % 10);
		num = num / 10;

	}
	printf("sum is %d", sum);
