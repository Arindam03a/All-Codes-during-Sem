#include<stdio.h>

int main()
{
    int array[] = {2, 9, 0, 7, 45}; 
    int n = 5; 
    int i, j, imin, temp;

    
    for(i = 0; i < n - 1; i++)
    {
        imin = i; 
        for(j = i + 1; j < n; j++) {
            if(array[j] < array[imin]) {
                imin = j; 
            }
        }

    
        temp = array[i];
        array[i] = array[imin];
        array[imin] = temp;
    }

    
    printf("Sorted array is: ");
    for(i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
