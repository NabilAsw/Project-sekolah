#include <iostream>
using namespace std;

int main() {
    int i = 1, N, jumlah = 0;
    double rata_rata;

    cout << "Masukkan banyak nilai : ";
    cin >> N;

    // Perulangan
    while (i < N) {
        cout << i * 7 << " ";
        jumlah = jumlah + (i * 7);
        i++;
    }

    jumlah = jumlah + (i * 7);
    cout << i * 7 << " ";
    cout << " = " << jumlah << endl;

    rata_rata = jumlah / (double)N;
    cout << "Rata-rata = " << rata_rata;

    return 0;
}


