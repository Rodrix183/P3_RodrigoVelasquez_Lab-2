#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
//using std::stoi;

int* llenarArreglo(int);
void imprimir(char*,int);
int* fillArray(int,int);

int main(){
    int sizeArray = 4;
    int resp =0;
    string numero1 = "";
    string resp1 = "";
    int chances = 5;
    int random = 0;
    int* arreglo = NULL;
    char* arregloChars = NULL;

    int uno =0 ;
    int dos = 0;
    int tres = 0;
    int cuatro = 0;

    do{
        cout<<"1. Mentes Maestras"<<endl
        <<"2. Binario"<<endl
        <<"3. Verbos Irregulares"<<endl
        <<"Ingrese una opcion: "<<endl;
        cin>>resp;
        switch(resp){
            case 1:{
                int tamNum = 0;                    
                do{//el de los chances                
                    do{
                        cout<<"Ingrese un numero de cuatro digitos: "<<endl;
                        cin>>numero1;                                        
                        tamNum = numero1.size();
                    }while(tamNum != 4);

                    arregloChars[0] = numero1[0];
                    arregloChars[1] = numero1[1];
                    arregloChars[2] = numero1[2];
                    arregloChars[3] = numero1[3];

                    //uno = stoi(numero1[0]);
                    //dos = stoi(numero1[1]);
                    //tres = std::stoi (numero1[2]);
                    //cuatro = std::stoi (numero1[3]);

                    //aqui el size == 4
                    arreglo = llenarArreglo(tamNum);                                            
                    
                                                         
                        if(numero1 == resp1){
                             cout<<"Ha Ganado! "<<endl;
                            chances = 0;
                        }else{
                            cout<<"Incorrecto! "<<endl;
                            //chances = chances -1;
                            for(int i = 0; i< 4; i++){
                                for(int j = 0; j <= i; j++){
                                    if(uno == arreglo[i]){//primer numero
                                        cout<<"ola";
                                    }

                                    if(dos == arreglo[i]){//segundo numero                                        
                                        cout<<"ola";                                    
                                    }

                                    if(tres == arreglo[i]){//tercer numero
                                        cout<<"ola";
                                    }

                                    if(cuatro == arreglo[i]){//cuarto numero
                                        cout<<"ola";
                                    }
                                
                                }
                            }//fin for
                            chances = chances - 1;
                         }
                }while(chances!=0);
               cout<<"Arreglo es: ";
               imprimir(arregloChars,4); 
            }//fin case
            break;

            case 2:{//ejercicio2
                int size = 8;
                int prueba = 20;
                int decimal = 0;
                int centinela = 1;
                cout<<"Ingrese un numero "<<endl;
                cin>>decimal;
                int* arr = fillArray(prueba,decimal);
                int arr2[size];
                for(int i = 0; i<size;i++){
                    arr2[i] = arr[prueba-centinela];
                    //cout<<" ["<<arr2[i]<<"]";
                    centinela = centinela - 1;
                }

                cout<<"Decimal "<<decimal<<endl
                <<"Binario ";
                for(int i = 0;  i < size; i++){
                    cout<<"["<<arr2[i]<<"]";
                 }
                //cout<<"Decimal "<<decimal<<endl;
                
            }
            break;

            case 3:{//ejercicio3
               bool erick = false;
                int temp =2;
                char* arre = new char[temp];
                int cont = 0;
                int temp2 = 0; 
               string verbo = "";
                char* arre2 = new char[temp2];
                 do{                
                    cout<<"Ingrese un verbo regular";
                    //string verbo = "";
                    cin>>verbo;
                    temp2 = verbo.size()-2;
                    //cin>>verbo;
                    
                    for(int i = 0; i < verbo.size();i++){
                           if(i == verbo.size() - 2){
                                arre[0] = verbo[i];
                            }else if(i == verbo.size() - 1){
                                arre[1] = verbo[i];
                            }else{
                                arre2[i] = verbo[i];
                            }     
                    }
                    
                    if(arre[0] == 'a' && arre[1] == 'r'){
                        erick = true;
                    }else if(arre[0] == 'e' && arre[1]=='r'){
                        erick = true;
                    }else if(arre[0] == 'i' && arre[1]== 'r'){
                        erick = true;
                    }else{
                        erick = false;
                    }
                }while(erick != true);
                
            cout<<endl<<"Pasado: ";
                //for de pasado
                for(int i = 0; i < verbo.size()-2;i++){
                    cout<<arre2[i];
                }
                if(arre[0]=='a'){
                    cout<<"e";
                }else if(arre[0]=='e'){
                    cout<<"i";
                }else if(arre[0]=='i'){
                    cout<<"i";
                }
                cout<<endl<<"Futuro: ";
                for(int i = 0; i < verbo.size()-2;i++){
                    cout<<arre2[i];
                }

                if(arre[0]=='a'){
                cout<<"are";
                }else if(arre[0]=='e'){
                cout<<"ere";
                }else if(arre[0]=='i'){
                cout<<"ire";
                }
            }//fin case 3
            break;
            default:
                cout<<"...Saliendo del programa"<<endl;
                resp = 4;
        

        }

    }while(resp != 4);

    return 0;
}

int* llenarArreglo(int size){    
    int* arreglo = NULL; 
    for(int i = 0; i < size;i++){
        arreglo[i] = rand() % 1 + 9;
        //srand (time(NULL));
    }        
    return arreglo;
}

void imprimir(char* arreglo,int size){
    for(int i = 0; i < size; i++){
        cout<<" ["<<arreglo[i]<<"] ";
    }
    
}

int* fillArray(int size,int decimal){
    int* arreglo = new int[size];
    //int* arregloOmejia = new int[8];
    for(int i = 0; i < size;i++){
           arreglo[i] = decimal%2;
            decimal = decimal/2; 
    }
    return arreglo;
}



