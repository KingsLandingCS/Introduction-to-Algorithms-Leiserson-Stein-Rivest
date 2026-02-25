#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int arr[] = {1, 2, 3, 4};
    int x = 3;
    int foundIndex = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            foundIndex = i;
            break;
        }
    }
    cout << foundIndex << endl;

    // If we reach here, element was not found

    return 0;
}