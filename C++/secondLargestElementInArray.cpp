#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int ans = INT_MIN;
    // Largest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ans)
        {
            second = max(second, arr[i]);
        }
    };

    cout << "Largest element: " << ans << endl;
    cout << "Second largest: " << second << endl;

    return 0;
}