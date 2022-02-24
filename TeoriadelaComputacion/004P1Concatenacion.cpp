/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#define TAM 5

using namespace std;

class opConcat{
    private:
        int conj1[TAM], conj2[TAM];
    public:
        opConcat();
        ~opConcat();
        void Concatenacion(int aux[], int aux1[]);
};
opConcat::opConcat(){
};
opConcat::~opConcat(){
};
void opConcat::Concatenacion(int aux[], int aux2[]){
    cout<<"\n-~-~-Concatenación-~-~-";
    cout << "\n\nConj1 * Conj2 = ";
    cout << "{";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout << aux[i] << aux2[j];		
            //if(j < TAM-1){
                cout << ", ";
            //}                
	}
    }    
    cout << "}\n\n";
    
    cout << "Conj2 * Conj1 = ";
    cout << "{";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout << aux2[i] << aux[j];		
            if(j < TAM && i < TAM){
                cout << ", ";
            }                
	}
    }    
    cout << "}\n\n";
};
int main(int argc, char** argv) {
    opConcat objeto1;
    int prueba1[TAM] = {0,1,2,3,4};
    int prueba2[TAM] = {3,4,5,6,7};
    
    objeto1.Concatenacion(prueba1, prueba2);
    
    
    return 0;
}