#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int rastgeleSayi = rand() % 100 + 1;

    int tahmin;
    int deneme = 0;

    cout << "Sayi Tahmin Etme Oyununa Hosgeldiniz" << endl;
    do {
        cout << "1 ile 100 arasinda bir sayi gir.";
        cin >> tahmin;
        deneme++;

        if (tahmin > rastgeleSayi) {
            cout << "Cok buyuk sayi! Bi daha dene." << endl;
        } else if (tahmin < rastgeleSayi) {
            cout << "Cok kucuk sayi! Bi daha dene" << endl;
        } else {
            cout << "Tebrikler! Sayiyi" << deneme << " denemede buldun" << endl;
        }
    } while (tahmin != rastgeleSayi);

    return 0;
}
