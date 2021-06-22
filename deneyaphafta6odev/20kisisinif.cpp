#include <iostream>
#include <string>
using namespace std;

int a()
{
    string ogrenciler[20][3];
 for(int i=0;i<20;i++){
    cout<<i+1<<". Ogrencinin ismini giriniz :"<<endl;
    getline(cin,ogrenciler[i][0]);
    cout<<"sirasini giriniz :"<<endl;
    cin>>ogrenciler[i][1];
    cout<<"okul no girin :";
    cin>>ogrenciler[i][2];
    cin.ignore();
 }
for(int i=0;i<20;i++){
        cout<<i+1<<". ogrenci :"<<endl;
    for(int k=0;k<3;k++){
        cout<<ogrenciler[i][k]<<" , ";
    }
    cout<<endl;
}
}

