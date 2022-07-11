//Write a program to convert a data stream from Little Endian to Big Endian (you can take any 8 bit value or use 0b110101110)?
#include <stdio.h>

int main()
{
    unsigned int num=0xFA,a,b,c;
    a=num&0x0F;
    a=a<<4;
    b=num&0xF0;
    b=b>>4;
    num=a|b;
    
  //  c=a|b;
    printf("%x",num);
}
