#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"kac not girilecegini yaziniz :";
    cin>>a;
    int notlar[6][a];
    for(int ogrenci=0;ogrenci<6;ogrenci++){
        cout<<"    "<<ogrenci+1<<". Ogrenci icin;"<<endl;
        for(int i=0;i<a;i++){
           cout<<i+1<<". Notu Giriniz :";
           cin>>notlar[ogrenci][i];
        }
    }
    for(int i=0;i<6;i++){
            int toplam;
        for(int k=0;k<a;k++){
          toplam=toplam+notlar[i][k];
        }
        cout<<i+1<<". Ogrencinin Ortalamasi:"<<toplam/a<<endl;
        toplam=0;
    }

}

