#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int largestNumber = INT_MIN;
    int secondLargestNumber = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largestNumber)
        {
            largestNumber = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largestNumber)
        {
            secondLargestNumber = max(secondLargestNumber, arr[i]);
        }
    }

    cout << "largest Number: " << largestNumber << endl;
    cout << "Second Largest Number: " << secondLargestNumber << endl;

    return 0;
}