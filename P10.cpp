#include<iostream>
#include<string>
using namespace std;

//methode 1

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;


    } while (Number <= 0);

    return Number;


}

int ReverseNumber(int  Number) {
    int Raimander = 0; int Number2 = 0;
    do {
        Raimander = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Raimander;
    } while (Number > 0);
    return Number2;
}


void PrintDigits(int Number) {
    int  Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;

        cout << Remainder << endl;
    }
}




int main() {
    int Number = ReverseNumber(ReadPositiveNumber("Please enter a positive number?"));

    PrintDigits(Number);
    return 0;
}









//methode 2

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

void PrintDigits(int Number) {
    if (Number < 10) {
        cout << Number;
        return;
    }

    PrintDigits(Number / 10);
    cout << Number % 10 << endl;
}

int main() {
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintDigits(Number);
    return 0;
}
