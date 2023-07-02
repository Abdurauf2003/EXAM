#include <iostream>
using namespace std;
int main()
{
  int birSon, ikkiSon, juftQiymat = 0;

  cout << "Boshlang'ich sonni kiriting: ";
  cin >> birSon;
  cout << "Ohirgi sonni kiriting: ";
  cin >> ikkiSon;

  if (birSon > ikkiSon)
    swap(birSon, ikkiSon);

  for (int son = birSon; son <= ikkiSon; son++)
    if (son % 2 == 0)
      juftQiymat += son;

  cout << "Juft sonlar yeg'indisi: " << juftQiymat << endl;

  return 0;
}
