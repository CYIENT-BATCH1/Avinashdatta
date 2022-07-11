 write a program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07 in register “ADCON0”



#include <stdio.h>

int main()
{
  int num1,num2;
  printf("enter number to check is in ADCONO Register: ");
  scanf("%d ",&num1);
  printf("enter number to set is in  Comon: ");
  scanf("%d ",&num2);
  if((28 &num1)==28)
  {
      num2=num2&0XF0;
      printf("number after clearing is required postions: %d",num2);
  }
  else
  {
      printf("CHS3,CHS2 CHS1 CHS0 bits are not equal to 0x7");
  }
  }
    return 0;
}

