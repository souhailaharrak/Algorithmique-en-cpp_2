

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int ReadPositivNumber(string message) {

    int Numbre = 0;

    do {
        cout << message << endl;
        cin >> Numbre;


    } while (Numbre <= 0);
    return Numbre;
};

int CountDigitFrequency(short DigitToCheck, int Number) {

    int Remainder = 0;
    int FreqCount = 0;

    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitToCheck == Remainder) {

            FreqCount++;

        }



    }
    return FreqCount;
}


int main() {
    // Write C++ code here
    int Number = ReadPositivNumber("plez entre positive number");

    short DigitToCheck = ReadPositivNumber("plez entre digit chek");
    int freq = CountDigitFrequency(DigitToCheck, Number);
    cout << "\nDigit " << DigitToCheck << " Frequency is " << freq;
    return 0;
}