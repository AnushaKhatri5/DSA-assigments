#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long comparisons = 0;
long swaps = 0;


void swap(int *a, int *b) //first swaping is done //
{
    int temp = *a;
    *a = *b;
    *b = temp;
    swaps++;
}

void bubbleSort(int arr[], int n)   //  Then, function for Bubble sort//
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            comparisons++;
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int n)   // here selection sort are performed //
{
    int i, j, min;
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            comparisons++;
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i)
            swap(&arr[i], &arr[min]);
    }
}

void insertionSort(int arr[], int n)   // Then insertion sort is done with function//
{
    int i, j, key;
    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0)
        {
            comparisons++;
            if(arr[j] > key)
            {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            }
            else
                break;
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r)   //Merge function for merge sorting//
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = j = 0;
    k = l;

    while(i < n1 && j < n2)
    {
        comparisons++;
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];
}


void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


void printArray(int arr[], int n)    //Function to print array 
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, choice, i;
    int arr[1000];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    srand(time(NULL));

    for(i = 0; i < n; i++)
        arr[i] = rand() % 1000 + 1;

    printf("\nNumbers before sorting:\n");
    printArray(arr, n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    comparisons = swaps = 0;    //considering swaps as 0//

    switch(choice)   //here cases are demostrate for each sorting 
    {
        case 1: bubbleSort(arr, n); break;
        case 2: selectionSort(arr, n); break;
        case 3: insertionSort(arr, n); break;
        case 4: mergeSort(arr, 0, n - 1); break;
        default: printf("Invalid choice\n"); return 0;
    }

    printf("\nNumbers after sorting:\n");
    printArray(arr, n);

    printf("\nTotal Comparisons: %ld\n", comparisons);
    printf("Total Swaps: %ld\n", swaps);

    return 0;
}

