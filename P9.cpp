
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ReadNumberPositive(string message) {
    int Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}

int digitchek(short digit, int Number) {

    int Remainder = 0;
    int frequency = 0;
    ;
    while (Number > 0) {

        Remainder = Number % 10;
        Number = Number / 10;


        if (digit == Remainder) {
            frequency++;
        }


    }

    return frequency;
}

void PrintDigitFrequence(int Number) {

    for (int i = 0; i < Number; i++) {
        short digitFrequency = digitchek(i, Number);
        if (digitFrequency > 0) {
            cout << "digit " << i << " Frequency is " << digitFrequency << endl;
        }
    }
}

int main() {
    // Write C++ code here
    int Number = ReadNumberPositive("entre un Number Positive");

    PrintDigitFrequence(Number);


}