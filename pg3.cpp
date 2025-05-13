/*
3. Program to left rotate the elements of an array
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int first_val = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = first_val;

    cout << endl
         << "Left rotated array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}