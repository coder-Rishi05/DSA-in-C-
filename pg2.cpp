/*
2. Program to find the frequency of each element in the array

*/

#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {1, 1, 2, 3, 2};
    int count = 0, occ = arr[0];

    cout<<"Given array : "<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Enter no. of which you want to check frequency : "<<endl;
    cin>>occ;


    for (int i = 0; i < 5; i++)
    {
        if (occ == arr[i]) count++;
        
    }

    cout<<"occurance of characters : "<<count;

    return 0;
}