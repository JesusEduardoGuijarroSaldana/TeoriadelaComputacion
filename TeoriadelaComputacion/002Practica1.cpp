/*
 * Nombre: Jesús Eduardo Guijarro Saldaña
 * Boleta: 2021670220
 * Grupo: 4CM2 | Fecha: 23 de febrero del 2022
 */

/* 
 * File:   Practica1.cpp
 * Author: guija
 *
 * Created on 18 de febrero de 2022, 08:37 AM
 */

#include <cstdlib>
#include <iostream>
# define TAM 5

using namespace std;

class operConj{
    private:
        int conj1[TAM], conj2[TAM];
        bool bandera = false;
        
    public:
        operConj(); // definimos el constructor 
        ~operConj(); // definimos el destructor
        void PedirDatosConj1();
        void PedirDatosConj2();        
        void Union();
        void Interseccion();
        void Concatenacion();
        void PotenciaConj1();
        void PotenciaConj2();
        
};
operConj::operConj(){
};
operConj::~operConj(){
};
void operConj::PedirDatosConj1(){
    cout << "\n Ingrese los elementos del 1er conjunto:" << endl;
    for(int i=0; i<TAM; i++){
        cout << "\t Elemento "<<i+1<< ": ";
        cin >> conj1[i];        
    }
     
}
void operConj::PedirDatosConj2(){
    cout << "\n Ingrese los elementos del 2do conjunto:" << endl; 
    for(int i=0; i<TAM; i++){
    cout << "\t Elemento "<<i+1<< ": ";
    cin >> conj2[i];        
    }  
}
void operConj::Union(){
    cout<<"\n-~-~-Unión-~-~-";
    cout<<"\nConj1 y Conj2";
    cout << " = {";
    for(int i = 0; i < TAM; i++){
        cout <<conj1[i];
        cout << ", ";
    }
    for(int i=0;i<TAM;i++){
	bandera = false;
        for(int j=0;j<TAM;j++){
            if(conj2[i]==conj1[j]){
                bandera = true;
            }
        }
        if(bandera==false){
            cout<<conj2[i];
            if(i < TAM-1){
                cout << ", ";
            }
        }
    }
    cout << "}\n\n";
};
void operConj::Interseccion(){
    cout<<"\n-~-~-Intersección-~-~-";
    cout<<"\nConj1 y Conj2";
    cout << " = {";
    for(int i=0; i<TAM; i++){
	bandera = false;
	for(int j=0; j<TAM; j++){
            if(conj1[i] == conj2[j]){
                bandera=true;
            }
	}
	if(bandera==true){
            cout << conj1[i];
            if(i < TAM-1){
                cout << ", ";
            }
	}    
    }
    cout << "}\n\n\n";
};
void operConj::Concatenacion(){
    cout<<"\n-~-~-Concatenación-~-~-";
    cout << "\n\nConj1 * Conj2 = ";
    cout << "{";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout << conj1[i] << conj2[j];		
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
            cout << conj2[i] << conj1[j];		
            if(j < TAM && i < TAM){
                cout << ", ";
            }                
	}
    }    
    cout << "}\n\n";
};
void operConj::PotenciaConj1(){
    
    cout<<"\nElementos de la Potencia 2 del Conj1: "<<endl;
    cout <<"\tConj1^{2} = {";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout<< conj1[i] << conj1[j];            
            cout<<", ";            
	}        
    }
    cout << "}";
    cout <<"\n\n";        
};
void operConj::PotenciaConj2(){
    cout<<"Elementos de la Potencia 2 del Conj2: "<<endl;
    cout <<"\tConj2^{2} = {";
    for(int i=0; i<TAM; i++){
	for(int j=0; j<TAM; j++){
            cout<< conj2[i] << conj2[j];            
            cout<<", ";            
	}        
    }
    cout << "}";
    cout <<"\n\n";      
}
int main(int argc, char** argv) {
    operConj objeto1;
    // menu de opciones
    int opc=0;
    bool salir = false;    
    
    do{
        cout << "\n\tPrograma de Operaciones con Conjuntos" << endl;
        cout << "\n\t~-~>Menú<~-~" << endl;
        cout << " 1) Union de Conjuntos." << endl;
        cout << " 2) Intersección de Conjuntos." << endl;
        cout << " 3) Concatenación de Conjuntos." << endl; 
        cout << " 4) Potencia de Conjuntos." << endl; 
        cout << "   \n->Presione 0 para salir." << endl; 
                
        cout <<"\n Ingrese una opción: ";
        cin >> opc;
        
        switch(opc){
            case 1:{ // caso union
                objeto1.PedirDatosConj1();
                objeto1.PedirDatosConj2();
                objeto1.Union();
                system("cmd /c pause");
                break;
            }
            case 2:{ // caso intersección
                objeto1.PedirDatosConj1();
                objeto1.PedirDatosConj2();
                objeto1.Interseccion();
                system("cmd /c pause");
                break;
            }
            case 3:{ // caso concatenación
                objeto1.PedirDatosConj1();
                objeto1.PedirDatosConj2();
                objeto1.Concatenacion();
                system("cmd /c pause");
                break;
            }
            case 4:{ // caso potencia                               
                int numConj=0;
                cout << "   \n¿Cuántos conjuntos desea elevar a la segunda potencia, 1 o 2? -> ";
                cin >> numConj;
                if(numConj==1){
                    objeto1.PedirDatosConj1();
                    objeto1.PotenciaConj1();
                }
                if(numConj==2){                    
                    objeto1.PedirDatosConj1();
                    objeto1.PedirDatosConj2();
                    objeto1.PotenciaConj1();                    
                    objeto1.PotenciaConj2();
                }                
                if(numConj!= 1 || numConj!= 2){
                    cout << "   Número incorrecto";
                }
                system("cmd /c pause");
                break;
            }            
            default:{   
                cout << " \n***** Eligió salir o la opción es inválida...\n\n" << endl;
                system("cmd /c pause");
                break;
            }
        }
        system("cmd /c cls");   
    }while(opc != 0);        
    return 0;
}

