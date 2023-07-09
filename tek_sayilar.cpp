#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream dosya("tek_sayilar.txt");

    int toplam = 0;

    for (int i = 1; i <= 100; i += 2) {
        toplam += i;
    }

    dosya << "1 ile 100 arasindaki tek sayilarin toplami: " << toplam;

    dosya.close();

    cout << "Dosyaya yazma tamamlandi." << endl;

    return 0;
}
