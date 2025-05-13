
// 7. Program to print the elements of an array present on even position

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl
         << "Array at even position : " << endl;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            cout << " " << arr[i];
        }
    }

    return 0;
}