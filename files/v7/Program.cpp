#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int a, b, c;
  cout << "1-sonni kiriting: ";
  cin >> a;
  cout << "2-sonni kiriting: ";
  cin >> b;
  cout << a << " * " << b << " = ";
  cin >> c;
  if ((a > 1 && a < 9) && (b > 1 && b < 9))
  {
    if (c == a * b)
    {
      cout << "Tabriklaymiz javobni to'g'ri topdingiz";
    }
    else
    {
      cout << "Javob xato, ko'paytirish jadvalini yodlang, to'g'ri javob: " << a * b;
    }
  }
  else
  {
    cout << "Kiritilgan son berilgan oraliqda emas";
  }
  return 0;
}