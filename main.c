#include<stdio.h>

int main()
{
    int size,i;
    printf("Enter array size : ");
    scanf("%d" , &size);
    int arr[size];
    printf("Enter %d elements into array : " , size);
    for(i=0;i<size;i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Given array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }

    int smallest = arr[0];

    for(i=0;i<size;i++)
    {
         int min_index = i;
         for(int j=i+1;j<size;j++)
         {
             if(arr[j] < arr[min_index])
                min_index = j;
         }
         int temp = arr[min_index];
         arr[min_index] = arr[i];
         arr[i] = temp;
    }
    printf("\nSorted array is : ");

    for(i=0;i<size;i++)
    {
        printf("%d " , arr[i]);
    }


}

