Sure! Here’s the README file in English:

---

# Sorting Algorithms in C++

This project includes three sorting algorithms: **Selection Sort**, **Bubble Sort**, and **Insertion Sort**. The code is written in C++ and allows you to input an array of numbers and sort it using any of these algorithms.

## Contents

- [Getting Started](#getting-started)
- [How to Use](#how-to-use)
- [Algorithm Comparison](#algorithm-comparison)
- [License](#license)

## Getting Started

To get started with the code, make sure you have a C++ development environment set up on your machine. You can use any text editor like Visual Studio Code or Code::Blocks.

### Requirements

- C++11 or higher
- A compiler like g++

## How to Use

1. Download the code to your machine.
2. Run the program.
3. Input the size of the array and the numbers you want to sort.
4. Uncomment the line for the sorting algorithm you want to use in the `main` function.

```cpp
//selectionSort(myArray, size); // Uncomment this line to use Selection Sort
//bubbleSort(myArray, size); // Uncomment this line to use Bubble Sort
//insertionSort(myArray, size); // Uncomment this line to use Insertion Sort
```

5. After running the program, the sorted array will be displayed on the screen.

## Algorithm Comparison

| Algorithm         | Worst Case (O) | Best Case (O) | Average Case (O) | Features                                |
|-------------------|-----------------|----------------|-------------------|-----------------------------------------|
| **Selection Sort** | O(n^2)          | O(n^2)         | O(n^2)            | Easy to understand, no additional space needed. |
| **Bubble Sort**    | O(n^2)          | O(n)           | O(n^2)            | Simple, can be optimized to stop if no swaps occur. |
| **Insertion Sort** | O(n^2)          | O(n)           | O(n^2)            | Efficient for small or nearly sorted arrays. |

### Notes

- All the above algorithms operate at O(n^2) in the worst case, making them inefficient for large datasets.
- More efficient algorithms like **Quick Sort** or **Merge Sort** can be used for larger datasets.

## License

This project is open-source and you can use and modify it as you wish. It's preferred to credit the source when using it in other projects.

---

