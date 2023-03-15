#include <iostream>
#include <string>
using namespace std;

int main() {
    string sifreli_metin;
    cout << "Sifreli metni girin: ";
    getline(cin, sifreli_metin);
    cout << endl;

    string shifted_metin = sifreli_metin;
    for (int i = 0; i < 20; i++) {
        shifted_metin = " " + shifted_metin;
        cout << shifted_metin << endl;

        int eslesen_char_say = 0;
        for (int j = 0; j < sifreli_metin.length(); j++) {
            if (sifreli_metin[j] == shifted_metin[j + 1]) {
                eslesen_char_say++;
            }
        }

        cout << i << ". Kaydirmada " << eslesen_char_say << " adet eslesen karakter bulundu." << endl;
        cout << endl;
    }

    return 0;
}
