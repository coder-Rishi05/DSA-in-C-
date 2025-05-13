/*
1. Program to copy all elements of one array into another array
*/

#include <iostream>

using namespace std;

int main()
{
    int size = 5;
    int arr1[5];
    int arr2[5];

    cout << "Enter element for the array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "For arr element : " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Entered Array elements are : ";

    for (int j = 0; j < size; j++)
    {
        cout << " " << arr1[j];
    }

    cout << endl
         << "Coping array element into another array(arr2) : " << endl;

    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
    cout << "Copied array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr2[i];
    }

    return 0;
}