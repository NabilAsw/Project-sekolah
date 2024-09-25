#include <iostream>
using namespace std;

int main() {
    int start, end;
    int count = 0; 
    int sum = 0;   

    cout << "Masukkan batas awal: ";
    cin >> start;
    cout << "Masukkan batas akhir: ";
    cin >> end;

    if (start % 2 != 0) {
        start++; 
    }

    cout << "Bilangan genap antara " << start << " dan " << end << " adalah:" << endl;

    for (int i = start; i <= end; i += 2) { 
        cout << i << endl; 
        count++;          
        sum += i;        
    }

    cout << "Jumlah bilangan genap: " << count << endl;
    cout << "Jumlah total bilangan genap: " << sum << endl;

    return 0;
}
