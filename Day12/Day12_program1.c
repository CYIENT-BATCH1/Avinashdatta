14. Find common elements in three sorted arrays, 3 array values are given as input to program.

#include<stdio.h>

int main()
{
    int a[5]={2,5,7,9,10};
    int b[5]={5,9,11,12,13};
    int c[10]={5,9,15,17,19};
    int i,j,k,flag=0;
    for(i=0;i<5;i++)
    {
    printf("%d ",a[i]);
    }
    for(j=0;j<5;j++)
    {
        printf("%d ",b[j]);
    }
    for(k=0;k<5;k++)
    {
       printf("%d ",c[k]);
    }
    for(i=0;i<5;i++)
    {
        int flag=0;
        for(j=0;j<5;j++)
        {
           if(a[i]==b[j])
           {
            for(k=0;k<10;k++)
            {
            if(b[j]==c[k])
            {
                flag=1;
                k++;
                break;
            }
            }
            j++;
            break;
           }
        }
        if(flag)
        printf("%d\n",a[i]);
    }
    return 0;
}



