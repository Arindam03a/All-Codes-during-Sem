#include<stdio.h>
{
    int main()
    {
        int arr={90,87,56,74,870};
                int i,j;
                int size;
                for(int i=1;i<size-1;i++)
                key=array[i];
                j=i-1;
                while(j>0&array[j]>key){
                    array[j+1]=array[j];
                    j--;
                }
                array[j+1]=key;
    }
         printf("Sorted array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
  }
