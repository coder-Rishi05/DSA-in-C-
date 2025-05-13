/*
4. Program to print the duplicate elements of an array
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int dup = arr[0];
    cout << "Given array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "duplicate elements of the array : " << endl;

    for (int j = 0; j < size-1; j++)
    {
        
        for (int i = j+1; i < size; i++)
        {
            if ( arr[j]  == arr[i])
            {
                cout << arr[j] << " ";
                
            }
        }
    }

    // cout<<dup;

    return 0;
}