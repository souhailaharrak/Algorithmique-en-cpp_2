
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ReadNumberPositive(string message) {
    int Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}

int digitchek(int Number) {

    int Remainder = 0;
    int frequency = 0;
    ;
    while (Number > 0) {

        Remainder = Number % 10;
        Number = Number / 10;

        if (Remainder % 2 == 0) {
            frequency++;
        }

    }
    return frequency;
}

int main() {
    // Write C++ code here
    int Number = ReadNumberPositive("entre un Number Positive");
    int results = digitchek(Number);
    cout << results;

}