
// 9. Program to print the largest element in an array

// 10. Program to print the smallest element in an array

#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int lar = arr[0];

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (lar < arr[i])
        {
            lar = arr[i];
        }

    }

    cout<<"Largest element : "<<lar;

    return 0;
}