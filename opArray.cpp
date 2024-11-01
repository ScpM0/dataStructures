#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to perform selection sort
void selectionSort(int arr[], int size) {
    int minIdx;
    for (int index = 0; index < size - 1; ++index) {
        minIdx = index;
        for (int j = index + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[index]);
    }
}

// Function to perform Bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) { // Outer loop to iterate through the array
        for (int j = 0; j < size - i - 1; j++) { // Inner loop to compare adjacent elements
            if (arr[j] > arr[j + 1]) { // Check if the current element is greater than the next element
                swap(arr[j], arr[j + 1]); 
            }
        }
    }
}

// Function to perform insertion sort
void insertionSort(int arr[], int size)
{
    int key , j;
    for (int i = 1; i < size ; i++) //Why did we start with one? - Because we assume that the first element is neat
    {
        key = arr[i];               // 0   1  2  3  4  5
        j = i - 1;                  //90 |40 50 30 45 60
        while (j >= 0 && arr[j]>key)
        {
            swap(arr[j + 1], arr[j]);
            j -= 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int index = 0; index < size; ++index) {
        cout << " " << arr[index];
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* myArray = new int[size];

    // Input Array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> myArray[i];
    }

    // You can choose to use either selectionSort , bubbleSort or insertionSort
    selectionSort(myArray, size); // Uncomment this line if you want to use Bubble Sort instead
    //bubbleSort(myArray, size); // Uncomment this line if you want to use Bubble Sort instead
    //insertionSort(myArray, size); //Uncomment this line if you want to use insertion Sort instead
    
    /*
     note!
     Sorting Algorithms (selectionSort , bubbleSort , insertionSort) Time Complexity ======> O(n^2)
    */

    
    printArray(myArray, size);

    // Deallocate the memory
    delete[] myArray;

    return 0;
}
