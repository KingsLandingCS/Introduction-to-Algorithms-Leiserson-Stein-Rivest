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