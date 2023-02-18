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

int PrintRevrseNumber(int  Number) {
    int Raimander = 0;
    int Sum = 0;
    do {
        Raimander = Number % 10;
        Number = Number / 10;

        Sum += Raimander;
    } while (Number > 0);

    return Sum;
}


int main() {
    cout << PrintRevrseNumber(ReadPositiveNumber("Please enter a positive number?"));
    return 0;


}