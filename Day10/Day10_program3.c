Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)

How Selection sort works is explained below.


include <stdio.h>
void sort_array(int *array, int size,int i,int j)
{
    int temp;
    if(i == (size - 1))
    {
        return;
    }
    else
    {
    
        if(array[j] < array[i])
        {
            temp=*(array +j);
            *(array + j)=*(array + i);
            *(array + i)=temp;
        }
    
    if(j == (size - 1))
    {
        i++;
        j=i;
    }
    sort_array(array, size, i, ++j);
    } 
}


int main()
{
    static int i=0;
    static int j=1;
    int size;
    printf("enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("enter the array elements");
    for( int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for( int i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    sort_array(array, size, i, j);
    for( int i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
}
