// 04. Write a C program to search an element in a 2D-Array using dynamic memory allocation.


#include <stdio.h>
#include <stdlib.h>

void search(int ar[],int size, int el)
{
    int i, c=0;
    for(i = 0; i < size; i++)
    {
        if(ar[i] == el)
        {
            printf("The element was found in index: %d", i+1);
            c++;
            break;
        }
    }
    if(c==0)
        printf("The element %d doesn't exist.", el);
}

void main()
{
    int n, i, s, *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements: ");
    printf("\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Enter the element to be searched: ");
    scanf("%d", &s);

    search(arr, n, s);
    free(arr);
}


//------------------------//
