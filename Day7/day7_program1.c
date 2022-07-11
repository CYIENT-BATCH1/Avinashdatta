//Write a code to swap even bits with odd bits in unsigned long variable(uint64).
#include <stdio.h>

int main()
{
    unsigned int num;
    scanf("%u",&num);
    unsigned int odd=num&0xAAAAAAAA;
    unsigned int even=num&0x55555555;
   // printf("%u",(odd>>1)|(even<<1));
   num=((odd>>1)|(even<<1));
   printf("%u",num);

    return 0;
}
