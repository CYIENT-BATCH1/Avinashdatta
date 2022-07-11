7)Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

#include<stdio.h>

int main(){
    int n=0xfa;
    int pos=3;
    int pos1=4;
    int pos2=6;
    n=n&~(1<<pos)&~(1<<pos1)&~(1<<pos2);

    printf("%x",n);
II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
#include <stdio.h>
int main(){
    int b,c,e, a=0x23;
    b=a&(1<<0);
    c=a&(1<<1);
    e=a&(1<<7);
    printf("%d%d%d",b,c,e);
}

