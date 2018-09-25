#include <iostream>

using namespace std;

//IMPRIMIR LISTA
void imprLista(int lista[], int lenLista){
    for (int i=0; i<lenLista; i++){
        cout<<lista[i]<<" ";
    }
}

//EJERCICIO 1: SUMA DE ARRAY
int suma(const int lista[], const int lenLista){
    int suma=0;
    for(int i=0; i<lenLista; i++){
        suma+=lista[i];

      }
    return suma;
    cout<<suma<<endl;
    }

//EJERCICIO 2: EL MENOR DE LA LISTA
int menor(const int arr[], const int len){
    int men= arr[0];
    for(int i=0; i<len ; i++){
        if(arr[i]< men)
            men=arr[i];
    }
    return men;
}
//EJERCICIO 4: ORDENAR ASCENDENTE
void ordenAscen( int lista[], int lenLista){
    for (int i=0; i<lenLista; i++){
        for (int j=0; j<lenLista; j++){
            if (lista[j]<lista[i]){

                int c=lista[i];
                lista[i]=lista[j];
                lista[j]=c;
        }}

}
}
//EJERCICIO 5: ORDENAR DESCENDENTE
void ordenDesc( int lista[], int lenLista){
    for (int i=0; i<lenLista; i++){
        for (int j=0; j<lenLista; j++){
            if (lista[j]>lista[i]){

                int c=lista[i];
                lista[i]=lista[j];
                lista[j]=c;
        }}

}
}
//EJERCICIO 6: INVERTIR LISTA
void invertir(int lista[], int lenLista){
    for(int i=0; i<=lenLista/2;i++){
        int cons=lista[i];
        lista[i]=lista[lenLista-1];
        lista[lenLista-1]=cons;
        lenLista-=1;
    }
    }
 //EJERCICIO 7: NUMEROS PERFECTOS
 bool perfecto(int num){

  int sum = 0;
  //buscamos los multiplos
  for(int i=1;i<num;i++){
  //si es multiplo se sumara a sum
    if (num%i==0 ){
      sum+=i;}
  }
  if (sum==num)
    return true;

  else
    return false;

 }

 int nPerf(int lista[], int lenLista){
    int cont=0;
    for(int i=0; i<lenLista;i++){
        if (perfecto(lista[i])==true)
            cont++;
    }
    return cont;
 }








int main()
{

    int lista[]={9,28,6};
    invertir(lista,3);
    imprLista(lista,3);
    cout<<'\n';
    ordenAscen(lista, 3) ;
    imprLista(lista,3);
    cout<<'\n';
    ordenDesc(lista, 3) ;
    imprLista(lista,3);
    cout<<'\n';
    cout<<nPerf(lista,3);



    return 0;
}
