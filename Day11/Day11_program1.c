#include<stdio.h>

int main()
{
    int i,first,last,mid,size,search;
    printf("enter the size of array");
        scanf("%d",&size);
    int array[size];
    printf("enter the elemnts by in array");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    //before search sorted array printed
    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    // enter the search elemnt by user
    printf("enter the search element");
    scanf("%d",&search);
    first=0;
    last=size-1;
    mid=first+last/2;
    int count=0;

    while(count!=search)
    {
        if(search<array[mid])
        {
            last=mid-1;
            mid=first+last/2;
        }
        else if(array[mid]==search)
        {
            printf("%d %d",search,mid);
            break;
        }
        else
        {
            first=mid+1;
            mid =first+last/2;
        }
    }
    return 0;
}

