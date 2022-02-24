/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
# define TAM 5

using namespace std;

class operUnion{
    private:
        int conj1[TAM], conj2[TAM];
        bool bandera = false;
    public:
        operUnion(); // definimos el constructor 
        ~operUnion(); // definimos el destructor        
        void Union(int aux[], int aux2[]);
        void Interseccion(int aux[], int aux2[]);
};
operUnion::operUnion(){
};
operUnion::~operUnion(){
};
void operUnion::Union(int aux[], int aux2[]){
    cout<<"\n-~-~-Unión-~-~-";
    cout<<"\nConj1 y Conj2";
    cout << " = {";
    for(int i = 0; i < TAM; i++){
        cout <<aux[i];
        cout << ", ";
    }
    for(int i=0;i<TAM;i++){
	bandera = false;
        for(int j=0;j<TAM;j++){
            if(aux2[i]==aux[j]){
                bandera = true;
            }
        }
        if(bandera==false){
            cout<<aux2[i];
            if(i < TAM-1){
                cout << ", ";
            }
        }
    }
    cout << "}\n\n";
};
void operUnion::Interseccion(int aux[], int aux2[]){
    cout<<"\n-~-~-Intersección-~-~-";
    cout<<"\nConj1 y Conj2";
    cout << " = {";
    for(int i=0; i<TAM; i++){
	bandera = false;
	for(int j=0; j<TAM; j++){
            if(aux[i] == aux2[j]){
                bandera=true;
            }
	}
	if(bandera==true){
            cout << aux[i];
            if(i < TAM-1){
                cout << ", ";
            }
	}    
    }
    cout << "}\n\n\n";
};

int main(int argc, char** argv) {
    operUnion objeto1;

    int prueba[5] = {0,1,2,3,4};
    int prueba2[5] = {3,4,5,6,7};

    objeto1.Union(prueba, prueba2); 
    objeto1.Interseccion(prueba, prueba2);
    
    return 0;
    
}