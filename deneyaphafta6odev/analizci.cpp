#include <iostream>
#include <ctime>
using namespace std;

int in()
{
    int sayac;
  int dizi[9]={1,2,3,4,5,6,7,8,9};
  int cevap;
  srand(time(0));
  for(int i=0;i<3;i++){
  int tahmin=1+rand()%9;
    cout<<tahmin<<" tahmini dogru mu ?"<<endl;
    cin>>cevap;
    switch(cevap){
     case 1 :
        cout<<sayac<<" denemede bildiniz";
        return 0;
     case 0 :
        sayac+=1;
    }
}
    cout<<"Oyun bitti, KAYBETTINIZ";
}
