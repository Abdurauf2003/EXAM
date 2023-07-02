#include <iostream>
using namespace std;
int main()
{
    cout << " Mavjud kupyuralar: 50000, 10000, 5000, 1000, 500, 200, 100" << endl;
    int pul[] = {50000, 10000, 5000, 1000, 500, 200, 100};
    int miqdorPul[7] = {0};
    int narx;
    cout << "Maxsulot narxini kiriting: ";
    cin >> narx;
    int qolganMiqdor = narx;
    for (int i = 0; i < 7; i++)
    {
        miqdorPul[i] = qolganMiqdor/ pul[i];
        qolganMiqdor = qolganMiqdor % pul[i];
    }
    cout << "Eng kam to'lov uchun berilgan kupyuralar bo'yicha " << narx << " so'm puldan:\n";
    for (int i = 0; i < 7; i++)
    {
        if (miqdorPul[i] > 0)
        {
            cout << pul[i] << " so'mlik kupyuralardan: " << miqdorPul[i] << " tasini ishlatish mumkin" << endl;
        }
    }
    return 0;
}
