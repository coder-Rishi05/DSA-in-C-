#include <iostream>

using namespace std;

void ptrnOne(int line)
{
    //  * * * * * /
    //  * * * * * /
    //  * * * * * /
    //  * * * * * /

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void ptrnTwo(int line)
{
    //  *         /
    //  * *       /
    //  * * *     /
    //  * * * *  /

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void ptrnThree(int line)
{
    //  1         /
    //  1 2       /
    //  1 2 3     /
    //  1 2 3 4   /

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void ptrnFour(int line)

{
    //  1         /
    //  2 2       /
    //  3 3 3     /
    //  4 4 4 4   /

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i<< " ";
        }
        cout << endl;
    }
}

void ptrnFive(int line)
{
    //  * * * *   /
    //  * * *     /
    //  * *       /
    //  *         /

    for (int i = 1; i <= line; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void ptrnSix(int line)
{
    //  1 2 3 4   /
    //  1 2 3     /
    //  1 2       /
    //  1         /

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value for n : ";
    cin >> n;
    ptrnOne(n);
    ptrnTwo(n);
    ptrnThree(n);
    ptrnFour(n);
    ptrnFive(n);
    ptrnSix(n);

    return 0;
}
