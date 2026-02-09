#include <stdio.h>

void swap(int *a, int *b)  //swap the variables//
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void maxheap(int arr[], int n, int i) // calculate max heap//
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;

    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxheap(arr, n, largest);
    }
}


void minheap(int arr[], int n, int i) //function to build min heap
{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] < arr[smallest])
        smallest = left;

    if(right < n && arr[right] < arr[smallest])
        smallest = right;

    if(smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        minheap(arr, n, smallest);
    }
}

int main()
{
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;
    int i;

    /* Build Max Heap */
    for(i = n/2 - 1; i >= 0; i--)
        maxheap(arr, n, i);

    printf("Max Heap: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    int arr2[] = {4, 10, 3, 5, 1};

    for(i = n/2 - 1; i >= 0; i--)
        minheap(arr2, n, i);

    printf("\nMin Heap: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}

