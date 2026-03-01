#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    // prompt user for a number to look up
    cout << "Enter a number to search in the array (1-10): ";
    int target;
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Number " << target << " is present in the array.\n";
    else
        cout << "Number " << target << " is missing from the array.\n";

    return 0;
}