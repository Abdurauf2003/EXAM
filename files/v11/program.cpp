#include <iostream>
using namespace std;
class Users {
    public: 
        int count, age, small=100, large=0, sum=0, average;
};
int main() {
    Users userObj;
    cout << "Mijozlarning sonini kiriting: "; cin >> userObj.count;
    for(int i=1; i<=userObj.count; i++) {
        cout << i << "-mijozning yoshini kiriting: "; cin >> userObj.age;
        if(userObj.age < userObj.small) {
            userObj.small = userObj.age;
        } else if(userObj.age > userObj.large) {
            userObj.large = userObj.age;
        }
        userObj.sum+=userObj.age;
        userObj.average = userObj.sum/userObj.count;
    }
    cout << "\nMijozlarning soni: " << userObj.count;
    cout << "\nEng kichik yosh: " << userObj.small;
    cout << "\nEng katta yosh: " << userObj.large;
    cout << "\nO'rtacha yosh: " << userObj.average;
    return 0;
}
