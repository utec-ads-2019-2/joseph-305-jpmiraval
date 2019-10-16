#include <iostream>
using namespace std;

int* calculados[13];



int calcular(int numero){

    int m=numero,objetivo,eliminados;
    while (true){
        eliminados=0;
        objetivo=(m-1)%(2*numero-eliminados);
        while (objetivo>=numero && eliminados<numero){
            eliminados++;
            objetivo = (objetivo-1+m)%(2*numero-eliminados);
        }
        if (eliminados==numero){
            calculados[numero] = new int(m);
            break;
        }
        m++;
    }
    return m;
}

int main() {
    for(int i = 0; i < 13; i++){
        calculados[i] = nullptr;
    }

    int numerito;
    while (cin >> numerito && numerito != 0){
        if(calculados[numerito]){
            cout<<*calculados[numerito]<<endl;
        }
        else
            cout<<calcular(numerito)<<endl;

    }
    return 0;
}