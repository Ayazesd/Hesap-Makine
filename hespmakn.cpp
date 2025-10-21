#include <iostream>
using namespace std;
int main() {
    int sayi1;
    int sayi2;
    cout<< "Birinci sayiyi giriniz:"<< endl;
    cin>> sayi1;
    cout<< "İkinci sayiyi giriniz :"<< endl;
    cin>> sayi2; 
    int Toplam = sayi1+ sayi2;
    int Fark = sayi2-sayi1;
    int Çarpım = sayi1*sayi2;
    double Bölme= sayi1/sayi2;
    cout<< "TOPLAM:"<< Toplam<<endl;
    cout<< "FARK:" << Fark<<endl;
    cout<< "ÇARPIM:"<< Çarpım<<endl;
    cout<< "BÖLÜM:" << Bölme<<endl;
    return 0;

}