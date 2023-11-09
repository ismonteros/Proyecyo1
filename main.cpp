#include <iostream>
#include <thread>
#include <chrono>
#include <conio.h>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;


int main() {
int segundo=0;
int minuto=0;
int hora=0;
int fin=0;

cout << "Ingrese la cantidad de tiempo a ingresar" << endl;
cout << "Horas:";
cin >>  hora;
cout << "Minutos:";
cin >>  minuto;
cout << "Segundos:";
cin >>  segundo;

while (fin==0){
    system("cls");
    cout <<"                 Temporizador  " << endl;
    cout << "                  " << hora << ":" << minuto << ":" << segundo << endl;
    sleep_for(seconds(1));
    segundo--;

    if(minuto==0 && segundo==0 && hora==0){
        fin=1;
    }

    if (minuto==0 && segundo==0){
        hora--;
        minuto=59;
        segundo=60;
    }

    if (segundo==0){
        minuto--;
        segundo=60;
    }


}
    system("cls");
   cout <<"                 Temporizador  " << endl;
    cout << "                  0:0:0" << endl;
getch();

}
