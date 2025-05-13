/*

6. Program to print the elements of an array in reverse order

*/

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int str = 0, end = size - 1;

    cout << "Given array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl
         << "Array in reverse order : " << endl;

    while (str < end)
    {
        int temp = arr[end];
        arr[end] = arr[str];
        arr[str] = temp;
        end--;
        str++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}