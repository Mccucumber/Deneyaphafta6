#include <iostream>

using namespace std;

int G()
{   int oyuncular[4][4]={
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16}};
    for(int i=0;i<4;i++){cout<<oyuncular[0][i]<<",";}
    for(int i=0;i<3;i++){cout<<oyuncular[i+1][3]<<",";}
    for(int i=2;i>=0;i--){cout<<oyuncular[3][i]<<",";}
    cout<<oyuncular[2][0]<<","<<oyuncular[1][0]<<","<<oyuncular[1][1]<<","<<oyuncular[1][2]<<","<<oyuncular[2][2]<<","<<oyuncular[2][1];


}

