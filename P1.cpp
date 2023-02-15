// Online C++ compiler to run C++ program online
#include <iostream>
using namespace  std;


void ReadNumber() {

    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10\n\n";
    cout << "\t";
    int multi = 1;
    for (int n = 1; n <= 10; n++) {


        cout << n << "\t";


    }
    cout << "-------------------------------------------------------------" << endl;


};

string ColumSperator(int i) {
    if (i < 10) {
        return "  |";


    }
    else {
        return "  |";
    }
};


void PrintMultiplicationTable() {
    ReadNumber();

    for (int i = 1; i <= 10; i++) {
        cout << " " << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++) {

            cout << i * j << "\t";
        }
        cout << endl;
    }
}


int main() {


    PrintMultiplicationTable();

}