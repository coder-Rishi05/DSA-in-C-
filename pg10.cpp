
// 10. Program to print the smallest element in an array

#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sml = arr[0];

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }

    for (int i = 0; i < size; i++)
    {
        if (sml > arr[i])
        {
            sml = arr[i];
        }

    }

    cout<<"Largest element : "<<sml;

    return 0;
}