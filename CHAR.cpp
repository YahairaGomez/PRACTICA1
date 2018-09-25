#include <iostream>

using namespace std;
//EJERCICIO : PALINDROMO
bool palindr(char cadena[]){
int lend=0;  //tamaño de lista
for(int i=0;cadena[i]!='\0';i++){  //de 0 hasta el fin de cadena
    lend++;  //len de lista
    }
int x=lend/2,igualL=0;
for(int i=0;i<=(lend/2);i++){
    if(cadena[i]==cadena[lend-1])
        igualL++;
}
if(igualL==x)
    return true;
return false;
}

//EJERCICIO: N CARACTERES
int carac(char cadena[], char caracter){
    int cant=0;
    for(int i=0; cadena[i]!= '\0';i++){
        if (cadena[i]==caracter){
            cant++;
        }
    }
    return cant; //para que acabe la funcion
}


//c[]={'c','d'}
//
//a[]="jasnbgshhs"


int main()
{
    char a[]="trdesaesdrtwefcnfwkenc";
    if(palindr(a)==true){
        cout<<"es palindrome";
    }
    else
        cout<<"no";
    cout<<carac(a,'e');
    return 0;
}
