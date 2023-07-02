#include <iostream>
#include <math.h>
using namespace std;

string ones[] = {"", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"};
string tens[] = {"", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson"};
string hundreds[] = {"", "yuz", "ikki yuz", "uch yuz", "to'rt yuz", "besh yuz", "olti yuz", "yetti yuz", "sakkiz yuz", "to'qqiz yuz"};

int main()
{
    int x;
    cout << "Son kiriting: ";
    cin >> x;

    if (x > 0 && x < 1000)
    {
        cout << hundreds[x / 100] << " " << tens[(x / 10) % 10] << " " << ones[x % 10];
    }
    else if (x == 0)
    {
        cout << "nol";
    }
    else
    {
        cout << "Bu son berilgan oraliqda emas";
    }

    return 0;
}
