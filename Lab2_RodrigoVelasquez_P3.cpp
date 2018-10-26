#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using std::cin;
using std::cout;
using std::endl;
using std::to_string;

int* llenarArreglo(int*,int);

int main(){
    int sizeArray = 4;
    int resp =0;
    string numero1 = "";
    int chances = 5;
    int random = 0;
    int* arreglo = NULL;
    char* arregloChars = NULL;
    do{
        cout<<"1. Mentes Maestras"<<endl
        <<"2. Ejercicio 2"<<endl
        <<"3. Ejercicio 3"<<endl
        <<"Ingrese una opcion: "<<endl;
        cin>>resp;
        switch(resp){
            case 1:{        
                do{
                cout<<"Ingrese un numero de cuatro digitos: "<<endl;
                cin>>numero1;
                for(int i = 0; i < 4;i++){
                    arregloChars[i] = numero1[i];
                }
                    if(numero1 == ""){
                         cout<<"Ha Ganado! "<<endl;
                         chances = 0;
                    }else{
                        cout<<"Incorrecto! "<<endl;
                        chances = chances -1;
                    }
                }while(chances!=0);
                
            }
            break;
            case 2:{
                
            }
            break;
            case 3:{
                
            }
            break;
            default:
                cout<<"...Saliendo del programa"<<endl;
                resp = 4;
        

        }

    }while(resp != 4);

    return 0;
}

int* llenarArreglo(int* arreglo,int size){    
     for(int i = 0; i < size;i++){
        arreglo[i] = rand() % 1 + 9;
        srand (time(NULL));
    }        
    return arreglo;
}

