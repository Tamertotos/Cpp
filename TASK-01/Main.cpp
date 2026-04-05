#include <iostream>
#include <string>

using namespace std;
int main() {
    int number1;
    int number2;
    int number3;
    cout << "Enter 3 non-negative numbers";
    cin >> number1 >> number2 >> number3;
    cout << "The numbers you have entered are: " << number1 << " " << number2 << " " << number3 << endl;

    int max = number1 > number2? (number1 > number3? number1 : number3) : (number2 > number3? number2 : number3);
    cout << "The maximum out ouf input numbers is: " <<  max << endl;

    for (int i = max; i > 0; i--) {

        if (number1 == i) {
            cout << "*";
            number1--;
        } else {
            cout << " ";
        }

        if (number2 == i) {
            cout << "*";
            number2--;
        } else {
            cout << " ";
        }

        if (number3 == i) {
            cout << "*";
            number3--;
        } else {
            cout << " ";
        }

        cout << endl;
    }
}