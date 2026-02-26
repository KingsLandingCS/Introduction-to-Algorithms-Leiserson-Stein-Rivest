#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int start = 0, end = 6;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    };

    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}