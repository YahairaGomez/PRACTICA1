#include <iostream>

using namespace std;
int suma(int *arr, int tam){ //asterisco o corchetes
    int res=0;
    for(int i=0; i<tam; i++)
        res+=arr[i];  // con punteros *arr++  ARITMETICA DE PUNTEROS
    return res;
}  //envia valor basura, por que res no esta igual a 0

void inv(int *arr, int tam){ //puntero apuntando al inicio
    int *fin=arr+tam-1; //puntero que apunta al final de tam
    while (fin > arr){ //comparo direccion
        int cont=*arr;
        *arr=*fin;  //PARA HACERLO MAS CORTO *arr++=*fin
        *fin=cont; //*fin--=cont
        fin--;
        arr++;

    }
}
bool palin(int *arr, int tam){

    int *fin= arr+tam-1;
    while (*arr < *fin){
        if (*arr!=*fin)
            return false;
        arr++;
        fin--;
    }
    return true;

}

int lenChar(char *arr){
    int tam=0;
    while (*arr!='\0'){
        tam++;
        arr++;
    }
    return tam;

}

void printf(int *arr, int tam){ //si solo quieres imprimir, usa void
    for(int i=0; i<tam; i++)
        cout<<arr[i]<<" ";
}
//str_copy
void str_cpy(char *cad1, char *cad2){  //cad2 debe tener tamaño necesario para almacenar a cad, sino se dara una sobrecarga del buffer
 int i=0;
 while (*cad1 != '\0'){
        *cad2++=*cad1;
        //cad2++;
        cad1++;

 }

}

int main()
{
    int arr[]= {4,2,10,2,4};
    char arr2[]= "Hola";
    char arr3[10];
    int *ptr=arr;//inicializo un puntero
    //envio el puntero de la primera posicion, no de todo el arreglo. Cuando llamamos a la funcion podemos llamarla int *arr o arr[]
    //cout<<suma(arr,5)<<endl;
    //inv(arr,5);
    //printf(arr,5);
    //cout<<palin(arr,5);
    cout<< lenChar(arr2);

    str_cpy(arr2, arr3);//quiero copiar el contenido de cadena 1 a cadena 2
    cout<<arr3;
    return 0;
}
