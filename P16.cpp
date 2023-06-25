 
#include <iostream>
using namespace std;


int ReadNumberPositive() {
    int Number;
    cout << "entre un nomber" << endl;
    cin >> Number;
    return Number;

}


void  PrintLetterPattern(int Number) {

    for (int i = 65; i <= 65 + Number - 1; i++) {
        for (int j = 1; j <= i - 65 + 1; j++) {

            cout << char(i);
        }
        cout << endl;
    };

}


int main() {
     
    cal(ReadNumberPositive());
}