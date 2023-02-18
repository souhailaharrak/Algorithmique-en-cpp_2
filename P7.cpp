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

int RevrseNumber(int  Number) {
    int Raimander = 0; int Number2 = 0;
    do {
        Raimander = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Raimander;
    } while (Number > 0);
    return Number2;
}


int main() {
    cout << RevrseNumber(ReadPositiveNumber("Please enter a positive number?"));
    return 0;


}