
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



bool Palindrome(int Number) {



    int Number2 = 0;

    int origin = Number;// garder une copie de la valeur d'origine

    int Raimander = 0;
    while (Number > 0) {
        Raimander = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Raimander;
    };

    if (origin == Number2) {
        cout << "Yes,it is a palindrome number ";
        return true;
    }
    cout << "Non, it is a Not palindrome number";
    return false;
}
int main() {
    // Write C++ code here
    int Number = ReadNumberPositive("entre un Number Positive");

    Palindrome(Number);


}