

**Documentation of Question No. 6**

**(Building Min Heap and Max Heap)**



**(A) Data Structures Defined**



**arr\[]=**

**An integer array used to store the unsorted input data.**

**The same array structure is used to represent both Min Heap and Max Heap.**



**n=**

**An integer variable that stores the total number of elements in the array.**



**Index-based tree representation=**

**The heap is implemented using an array where the binary tree is represented as follows:**

**Left child index = 2i + 1**

**Right child index = 2i + 2**



**This representation allows efficient access to parent and child nodes.**



**(B) Functions Implemented**



**-swap(int \*a, int \*b)**

**This function swaps the values of two elements in the array.**

**It is used during heap construction to maintain the heap property.**



**-maxheap(int arr\[], int n, int i)**

**This function is used to build and maintain a Max Heap.**

**It ensures that the value of a parent node is always greater than its child nodes.**

**If the heap property is violated, the function swaps elements and recursively fixes the heap.**



**-minheap(int arr\[], int n, int i)**

**This function is used to build and maintain a Min Heap.**

**It ensures that the value of a parent node is always smaller than its child nodes.**

**Recursive calls are made until the heap property is satisfied.**



**(C) main() Overview**

**The main() function performs the following steps:**



**-Initializes an unsorted array of integers.**

**- Builds a Max Heap by calling the maxheap() function starting from the last non-leaf node.**

**- Displays the resulting Max Heap.**

**- Uses the same unsorted data again.**

**- Builds a Min Heap by calling the minheap() function.**

**- Displays the resulting Min Heap.**





**(D) Sample Output**



**Input Array:**

**{4, 10, 3, 5, 1}**



**Output:**

**Max Heap: 10 5 3 4 1**

**Min Heap: 1 4 3 10 5**







