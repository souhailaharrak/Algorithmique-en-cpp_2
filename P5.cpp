#include<iostream>
#include<string>
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

void PrintRevrseNumber(int  Number) {
    int Raimander = 0;
    do {
        Raimander = Number % 10;
        Number = Number / 10;
        cout << Raimander;
    } while (Number > 0);

}


int main() {
    PrintRevrseNumber(ReadPositiveNumber("Please enter a positive number?"));
    return 0;


}