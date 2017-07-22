#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int time=0;
    int ho_ac=0;
    int ho_ad=0;

    do{
       cout<<"Ingrese la hora actual : \n";
        cin>>time;

        cout<< "Ingrese la cantidad de horas : \n";
        cin>>ho_ac;

        ho_ad=time+ho_ac;

        while(ho_ad>12){
            ho_ad = ho_ad-12;
        }

        cout<<"En "<<"El reloj marcara las "<< ho_ad <<"\n";


    }while(time != -1);

    return 0;




}
