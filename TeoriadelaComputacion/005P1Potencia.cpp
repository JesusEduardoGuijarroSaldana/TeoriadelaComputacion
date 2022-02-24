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

class opPotencia{
    private:
    public:
        opPotencia();
        ~opPotencia();
        void Potencia(int aux[]);        
};
opPotencia::opPotencia(){
};
opPotencia::~opPotencia(){
};
void opPotencia::Potencia(int aux[]){    
//    for(int i=0; i<TAM; i++){ // 5 elementos
//        for(int j=0; j<N; j++){
//            cout<< aux[j];
//        }
//        cout << " ";
//    }
//    for(int i=0; i<N; i++){
//	int j=0;
//	if(j == 0){
//		cout << aux[i] << aux[i];
//                j++;
//	}	
//		cout << aux[i] << aux[i+1];                
//                cout << " ";	
// ****** Potencia solo mostrando 5 elementos del resultado
//    cout <<" = {";
//    for(int i=0; i<N; i++){
//        for(int j=0; j<N; j++){
//            cout << aux[i];
//        }
//        if(i<N-1){
//            cout<<", ";
//        }
//    }
//    cout <<"}\n\n";
    
    cout <<" = {";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout<< aux[i] << aux[j];            
            cout<<", ";            
	}        
    }
    cout << "}";
    
};
int main(int argc, char** argv) {
    opPotencia objeto1;
    int prueba1[TAM] = {0,1,2,3,4};
    int prueba2[TAM] = {3,4,5,6,7};            
    int N=5;
    objeto1.Potencia(prueba1);        
    return 0;
}