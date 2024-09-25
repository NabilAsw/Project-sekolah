#include <iostream>
using namespace std;

int main() {
    int j;
    cout << "Masukkan jumlah bilangan yang akan dijumlahkan: ";
    cin >> j; 

    int total_genap = 0;

    for (int i = 0; i < j; i++) {
        int bilangan;
        cout << "Masukkan bilangan ke-" << (i + 1) << ": ";
        cin >> bilangan; 

        if (bilangan % 2 == 0) {
            total_genap += bilangan; 
        }
    }

   
    cout << "Total penjumlahan bilangan genap: " << total_genap << endl;

    return 0;
}

