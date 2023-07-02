#include <iostream>
using namespace std;
int main() {
    int a, c, sum=0, large=0, small=0, average;
    cout << "Sonlarni kriting: " << endl;
    for(;;) {
        cin >> a;
        c++;
        sum+=a;
        if(a > large) {
            large = a;
        }
        if(a < small) {
            small = a;
        }
        average = sum/c;
        if(a == 0) {
            cout << "\n Nechta son kiritilgani: " << c;
            cout << "\n Sonlarning umumiy yig'indisi: " << sum;
            cout << "\n Sonlarning eng katta qiymati: " << large;
            cout << "\n Sonlarning eng kichik qiymati: " << small;
            cout << "\n Sonlarning o'rtacha qiymati: " << average;
            break;
        } else continue;
    }
    return 0;
}