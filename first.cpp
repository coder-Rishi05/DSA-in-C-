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

void ptrnSeven(int line)
{
    for (int i = 0; i < line; i++)
    {
        for (int j = i + 1; j < line; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}


void ptrnEight(int line)
{
    /*
     *
     * * *
     * * * * *
     * * * * * * *
     * * * * * * * * *
     */
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < line - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < line - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void ptrnNine(int line)
{
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * (line - i) - 1); k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void ptrnten(int line)
{
    for (int i = 1; i <= (2 * line) - 1; i++)
    {
        int str = i;
        // if (i <= line) {
        //     str = i; // First half (increasing stars)
        // } else {
        //     str = (2 * line) - i; // Second half (decreasing stars)
        // }

        if (i > line)
            str = (2 * line) - i;
        for (int j = 1; j <= str; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void ptrn11(int line)
{
    for (int i = 1; i <= line; i++)
    {
        int spc = (i % 2 == 0) ? 0 : 1;

        for (int j = 1; j <= i; j++)
        {
            cout << spc;
            spc = 1 - spc;
        }
        cout << endl;
    }
}

void ptrn12(int line)
{
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <= 2 * (line - i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

void ptrn13(int line)
{
    for (int i = 1; i <= line; i++)
    {
        int k = i;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

void ptrn14(int line)
{
    for (int i = 1; i <= line; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void ptrn15(int line)
{
    for (int i = 0; i < line; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (line - i - 1); ch++)
        {
            cout << ch;
        }
        cout << endl;
    }
}

void ptrn16(int line)
{
    for (int i = 1; i < line; i++)
    {
        // space

        for (int k = 0; k < line - i - 1; k++)
        {
            cout << " ";
        }
        // char
        char ch = 'A';
        int breakp = (2 * i + 1) / 2;

        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << ch << " ";
            if (j < breakp)
                ch += 1;
            else
                ch--;
        }
        // space
        for (int k = 0; k < line - i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void ptrn17(int line)
{

    int inis = 0;
    for (int i = 0; i <= line; i++)
    {
        for (int j = 1; j <= line - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= line - i; j++)
        {
            cout << "*";
        }
        inis += 2;
        cout << endl;
    }
    inis = 8;
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < inis; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
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
    ptrnSeven(n);
    ptrnEight(n);
    ptrnNine(n);
    ptrnten(n);
    ptrn11(n);
    ptrn12(n);
    ptrn13(n);
    ptrn14(n);
    ptrn15(n);
    ptrn16(n);
    ptrn17(n);
    return 0;
}
