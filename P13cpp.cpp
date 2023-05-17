

#include <iostream>
using namespace std;

int ReadNumberPositive(string message) {
    int Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}


int pattern(int Number) {


    for (int i = 1; i <= Number; i++) {


        for (int j = 1; j <= i; j++) {


            cout << i;

        }

        cout << endl;



    }

}


int main() {
    // Write C++ code here
    int Number = ReadNumberPositive("entre un Number Positive");
    pattern(Number);



}