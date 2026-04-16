#include <iostream>
using namespace std;

int element [10];
int npanjang;
int x;

void input ()
{
    while (true)
    {
        cout << "masukkan banyaknya element pada array (maksimal 10): ";
        cin >> npanjang;

        if (npanjang <= 10)
        {
            break;
        }
        
    }
}
