#include <iostream>
using namespace std;
class Traders {
    public: 
        int count, goods;
};
int main() {
    Traders traderObj;
    cout << "Qutilar sonini kiriting: "; cin >> traderObj.count;
    for(int i=1; i<=traderObj.count; i++) {
        cout << i << "-yuk mashinasiga ortiladigan qutilar: "; cin >> traderObj.goods;
        if(traderObj.count>=traderObj.goods) {
            traderObj.count = traderObj.count - traderObj.goods;
            if(traderObj.count == 0) {
                cout << "Omborda qutilar qolmadi";
            }
        } else if(traderObj.count < traderObj.goods) {
            cout << "Omborda " << traderObj.count << " ta quti bor, qutilar soni " << traderObj.count << " dan oshmasligi kerak" << endl;
        }
    }
    return 0;
}
