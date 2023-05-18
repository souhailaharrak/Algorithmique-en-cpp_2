

#include <iostream>
using namespace std;

int ReadNumberPositive(string message) {
    int Number;
    cout << message << endl;
    cin >> Number;
    return Number;

}


int pattern(int Number) {


    for (int i = Number; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            char letter = static_cast<char>(i + 96);
            cout << letter;
        }
        cout << endl;
    }


}


int main() {
    // Write C++ code here
    int Number = ReadNumberPositive("entre un Number Positive");
    pattern(Number);



}