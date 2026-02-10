 **Documentation of question no 8**



**(A) Data Structures Defined**



**arr\[]=**

**An integer array used to store randomly generated numbers in the range 1 to 1000.**



**n=**

**An integer variable that stores the number of elements entered by the user.**



**comparisons=**

**A global variable used to count the total number of comparisons made during sorting.**



**swaps=**

**A global variable used to count the number of swaps or movements performed during sorting.**



**(B) Functions Implemented**



**swap(int \*a, int \*b)=**

**Swaps two elements in the array and increments the swap counter.**



**bubbleSort()=**

**Sorts the array using Bubble Sort by repeatedly swapping adjacent elements.**



**selectionSort()=**

**Sorts the array by repeatedly selecting the smallest element from the unsorted part.**



**insertionSort()=**

**Sorts the array by inserting elements into their correct position.**



**mergeSort()=**

**Sorts the array using divide and conquer technique.**



**merge()=**

**Merges two sorted subarrays during merge sort.**



**printArray()=**

**Displays all elements of the array.**







**(C) main() Overview**



**The main() function performs the following steps:**



 **-Reads the value of N from the user.**

 **-Generates N random numbers between 1 and 1000.**

 **-Displays the numbers before sorting.**

 **-Allows the user to select a sorting algorithm.**

 **-Sorts the array using the chosen algorithm.**

 **-Displays the sorted array.**

 **-Prints the total number of comparisons and swaps.**



**(D) Sample Output**



**Enter number of elements: 5**

**Numbers before sorting:**

**532 123 845 211 67**



**Choose Sorting Algorithm:**

**1. Bubble Sort**

**2. Selection Sort**

**3. Insertion Sort**

**4. Merge Sort**



**Numbers after sorting:**

**67 123 211 532 845**



**Total Comparisons: 7**

**Total Swaps: 4**





