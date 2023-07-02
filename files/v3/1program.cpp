#include <bits/stdc++.h> 
using namespace std; 
void convert_to_words(char* number) 
{ 
    int length = strlen(number);
    if (length == 0) { 
      cout<<"Bo'sh string";
      return;
    } 
    if (length > 3) { 
      cout<<"3 dan katta uzunlik qabul qilinmaydi";
      return;
    } 
    char* single_digits[] = { "nol", "bir", "ikki",  "uch", "to'rt'", "besh", "olti", "yetti", "sakkiz", "to'qqiz" }; 

    char* tens_multiple[] = { " ", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltmish", "yetmish", "sakson", "to'qson" }; 

    char* tens_power[] = { "yuz"}; 
    cout << "\n" << number << ": "; 
    if (length == 1) { 
        cout << single_digits[*number - '0'] << "\n"; 
        return; 
    } 
    while (*number != '\0') { 
        if (length ==  3) { 
            if (*number - '0' != 0) { 
                cout << single_digits[*number - '0'] << " "; 
                cout << tens_power[length - 3]<< " " ;
            } 
            --length; 
        } 
        else { 
              int i = *number - '0'; 
        string tm = i ? tens_multiple[i] : ""; 
                cout << tm << " "; 
                ++number; 
                if (*number != '0') {
                    cout << single_digits[*number - '0'] << " "; 
        }
          } 
        ++number; 
    } 
}
int main() 
{ 
    convert_to_words("9923"); 
    convert_to_words("546"); 
    convert_to_words("87"); 
    convert_to_words("3"); 
    return 0; 
}