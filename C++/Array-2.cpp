#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[6] = {2, 3, 6, 8, 7, 9};
    int ans = INT_MAX;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    cout << ans << endl;

    return 0;
}