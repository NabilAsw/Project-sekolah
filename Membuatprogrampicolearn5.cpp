#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Masukkan bilangan: ";
    cin >> number;

    int originalNumber = number;
    
    cout << number;

    // Loop through even numbers and subtract them
    for (int i = number - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            cout << " - " << i;
            number -= i;
        }
    }

    cout << " = " << number << endl;

    return 0;
}

