/*
5. Program to print the elements of an array
*/

#include <iostream>

using namespace std;

int main()
{

    int arr[10];
     int size;

    cout << "Enter size of an array : ";
    cin >> size;

    cout << "Enter elements for the arra : " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "elements of the array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout <<" "<<arr[i];
    }

    return 0;
}