#include <iostream>
using namespace std;

enum PrimeNotPrime {
    NotPrime,
    prime

};

int  ReadNumber(string message) {
    int  Number;
    do {

        cout << message << endl;
        cin >> Number;

    } while (Number < 0);


    return Number;
}

PrimeNotPrime check(int Number) {
    for (int i = 1; i <= Number; i++) {

        if (Number % 2 == 0) {

            return PrimeNotPrime::NotPrime;
        }
        else {
            return PrimeNotPrime::prime;
        }
    }



}

void PrintPrimeNumbersFrom1ToN(int Number) {
    for (int i = 1; i <= Number; i++) {
        if (check(i) == PrimeNotPrime::prime) {
            cout << i << endl;
        }
    }


}

int main() {
    PrintPrimeNumbersFrom1ToN(ReadNumber("entre un number"));
}