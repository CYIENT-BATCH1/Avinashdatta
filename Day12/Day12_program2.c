. Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. And replace the empty string array element as “CYIENT”

#include<stdio.h>
    #include<string.h>
    int main()
    {
      char d;
      char array[5][10];
      for(int i=0;i<10;i++)
{
        int j=0;
        scanf("%c",&d);
        while(d!='\n')
        {
          array[i][j++]=d;
          scanf("%c",&d);
        }
        array[i][j]='\0';
      }
      for(int i=0;i<5;i++)
      {
           if(strlen(array[i])==0)
           {
    printf("cyient\n");
             }
           else
            {
            printf("%s\n",array[i]);
             }
      }  
return 0;
    }

