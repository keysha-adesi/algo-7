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
        else 
        {
            cout <<"\n[!] jumlah elemen tidak boleh lebih dari 10. silahkan coba lagi.\n";
        }
    }

    cout << "\n========================\n";
    cout << "     Masukan Elemen Array   ";
    Cout << "==========================\n";

    for (int i= 0; i <npanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> element[i];
    }
}

void bubleSortArray()
{
    int pass = 1;
    do
    {
     for (int j = 0; <= npanjang - 1 - pass; j++)
     {
        if (element[j] > element[j + 1])
        {
            int temp = element[j];
            element[j] = element[j + 1];
            element[j + 1] = temp;

        }
     }
     pass++;
    } while (pass <= npanjang -1)
    
}