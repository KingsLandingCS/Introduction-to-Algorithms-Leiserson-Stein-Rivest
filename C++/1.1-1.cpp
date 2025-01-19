// 1. Sorting Grocery Store Checkout Lines (with QuickSort)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// QuickSort function

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {

        int pivot = arr[high]; // pivot element
        int i = (low - 1);     // index of smaller element

        // Partitioning step
        for (int j = low; j < high; j++)
        {

            if (arr[j] < pivot)
            {

                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pi = i + 1; // pivot index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    // Representing the number of customers in different checout lines
    vector<int> checkoutLines = {5, 3, 7, 1, 2, 6};

    // Sorting the checkout lines
    quickSort(checkoutLines, 0, checkoutLines.size() - 1);

    // Display the sorted checkout lines (in ascending order of customers)
    cout << "Checkout lines sorted by number of customers:" << endl;
    for (int line : checkoutLines)
    {
        cout << line << " " << endl;
    }

    return 0;
}

// Code Snippet:
// cpp
// Copy
// Edit
// for (int j = low; j < high; j++) // Loop through sub-array
// {
//     if (arr[j] < pivot)          // Check if the current element is less than the pivot
//     {
//         i++;                     // Move the boundary of the "smaller elements" partition
//         swap(arr[i], arr[j]);    // Swap the smaller element into the left partition
//     }
// }
// Example Array:
// Let's say we are sorting the array:
// [5, 3, 7, 1, 2, 6]

// Initial values:
// low = 0, high = 5
// Pivot: 6 (last element)
// Sub-array to process: [5, 3, 7, 1, 2] (exclude pivot for now)
// i = -1 (boundary of "smaller elements" starts outside the array)
// Step-by-Step Visualization:
// Initial Setup:
// Array: [5, 3, 7, 1, 2, 6]
// Pivot: 6
// i = -1
// Step 1: j = 0, arr[j] = 5
// Compare arr[j] with the pivot: 5 < 6 → True
// Increment i: i = 0
// Swap arr[i] with arr[j]: Swap arr[0] with arr[0] (no change)
// Array: [5, 3, 7, 1, 2, 6]
// Step 2: j = 1, arr[j] = 3
// Compare arr[j] with the pivot: 3 < 6 → True
// Increment i: i = 1
// Swap arr[i] with arr[j]: Swap arr[1] with arr[1] (no change)
// Array: [5, 3, 7, 1, 2, 6]
// Step 3: j = 2, arr[j] = 7
// Compare arr[j] with the pivot: 7 < 6 → False
// i remains unchanged: i = 1
// No swap happens.
// Array: [5, 3, 7, 1, 2, 6]
// Step 4: j = 3, arr[j] = 1
// Compare arr[j] with the pivot: 1 < 6 → True
// Increment i: i = 2
// Swap arr[i] with arr[j]: Swap arr[2] with arr[3]
// Array: [5, 3, 1, 7, 2, 6]
// Step 5: j = 4, arr[j] = 2
// Compare arr[j] with the pivot: 2 < 6 → True
// Increment i: i = 3
// Swap arr[i] with arr[j]: Swap arr[3] with arr[4]
// Array: [5, 3, 1, 2, 7, 6]
// Final State After Loop:
// The loop ends with j = 4.
// Final state of the array (before placing the pivot):
// [5, 3, 1, 2, 7, 6]
// All elements smaller than the pivot (6) are on the left.
// Next Step: Placing the Pivot
// After the loop finishes, the pivot (6) is swapped into its correct position:

// Swap arr[i + 1] with arr[high]: Swap arr[4] with arr[5].
// Final array: [5, 3, 1, 2, 6, 7].
// Visualization Table:
// j	arr[j]	Condition (arr[j] < pivot)	i (after increment)	Swap	Array State
// 0	5	True	0	arr[0] ↔ arr[0]	[5, 3, 7, 1, 2, 6]
// 1	3	True	1	arr[1] ↔ arr[1]	[5, 3, 7, 1, 2, 6]
// 2	7	False	1	No Swap	[5, 3, 7, 1, 2, 6]
// 3	1	True	2	arr[2] ↔ arr[3]	[5, 3, 1, 7, 2, 6]
// 4	2	True	3	arr[3] ↔ arr[4]	[5, 3, 1, 2, 7, 6]
// This visualization demonstrates how arr[j] is compared with the pivot, and how swaps occur when the condition is met, ensuring that smaller elements are moved to the left partition.