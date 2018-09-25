#include <iostream>

using namespace std;
//EJERCICIO 1 MULTIPLOS DE 3 Y 5
int mult(){
int suma=0;
    for(int i=1;i<1000;i++){
        if((i%3)== 0 || (i%5)==0){
            suma+=i;
        }
    }
    cout<<suma<<endl;
}

//    EJERCICIO 2 FIBONACCI
int fibonacci(){
    int a = 1, b = 2, fib = 0, resp = 2;
    while (a+b < 4000000){
            fib = a+b;
            if (fib % 2 == 0)
                {resp += fib;}
                a = b;
                b = fib;
    }

   cout << endl << "la suma fibonacci es:  " << resp << endl;
}

//    EJERCICIO 3
    int factorPrimo(){
        long long num=600851475143, i=2,fact,cont=2;
    while(i<num){  //mientras que i sea menor al numero
        if(num%i==0){ //busca multiplos del numero
            fact=i;
            while(fact%cont != 0){ //mientras su modulo no sea 0 osea que son primos sumamos 1 a cont
                cont++;
                if(cont==fact-2){ //si cont a fact menos 2, significa que es primo
                    cout<<fact<<endl;
                    cont=2;
                    break;
                }
            }
        }
        i++;
    }

    }
//EJERCICIO 4
int palindrome() {
    int n1,n2,n3,n4,n5,n6,num6cifras,v2=999;
    for(int v1=999;v1>=v2;v1--){
        num6cifras=v1*v2;
        n1=num6cifras/100000;
        n2=(num6cifras%100000/10000);
        n3=(num6cifras%10000/1000);
        n4=(num6cifras%1000/100);
        n5=(num6cifras%100/10);
        n6=num6cifras%10;
    if (n1==n6 && n2==n5 && n3==n4){
        cout<<num6cifras<<" es un palindrome de 6 cifras formado por "<<v1<<" y "<<v2 ;
            }
    else
        v2--;
        }

    return 0;
}




//    EJERCICIO 5 //multiplo mas pequeño
    int mulMasPeque(){
        int arr[10];
    for(int i=0;i<10;i++){ //creamos el array desde 1 hasta 20
        arr[i]=i+1;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<i;j++){ //va a comparar i[0] con todos los valores hasta 20
            if(arr[i]%arr[j]==0) //compara todos los valores, busca multiplos
                arr[i]=arr[i]/arr[j]; //agrega a una lista los minimos valores
        }
    }
    int divis=1;
    for(int i=0;i<20;i++)
        divis*=arr[i]; //multiplica los minimos valores de la lista

    cout<<divis<<endl;
    }


 //   EJERCICIO 6 SUMA DE DIFERENCIA CUADRADA
    int difCuadrada(){
        int rest,sum=0,produ=0;

    for(int i=1;i<=100;++i){
        sum+=i; //SUMA EL ARRAY
        produ+=(i*i); //ELEVA AL CUADRADO
    }

    sum*=sum; //ELEVA AL CUADRADO
    rest=sum-produ; //resultado
    cout<<rest;
    }

//EJERCICIO 7: 10001 PRIMO 10001
int primo(){
      int cont, t=1, pr;
    for(int x=1; ; x++){
        cont=0;
        for(int y=1; y<=x ; y++){
            if(x%y==0){
                cont+=1;
            }
        }
        if(cont==2){
            pr=x;
            t++;
            if(t>10001){
                break;
            }
        }
}


//EJERCICIO 8

//EJERCICIO 9: PITAGÓRICOS
int pitag()
{
    for (int a=0; a<1000 ;a++){
        for(int b=a+1; b<1000 ; b++){
            for(int c=b+1; c<1000; c++){
                  if (a+b+c==1000){
                    if ((a*a)+(b*b)==c*c){
                cout<<"a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
                cout<<"Resultado= "<<a*b*c<<endl;
                break;
                  }
            }

                                    }
                            }
        }
}


//  EJERCICIO 10
int sumPrimos(){
    int primo, cont=0,j=2;
    long long SUMA=0;
    while(j<2000000){ //hasta los primos menores a 2000000
        for(int i=1;i<(j+1);i=i+1){ //desde 1 hasta 2000000
            if ((j%i)==0){ //va a encontrar multiplos
                cont=cont+1; //suma 1 al contador
    		}
    		primo=i; //sino almacena ese i en primo
		}
		if(cont==2){ //si cont==2, significa que tiene solo 2 divisores, entonces es primo
                SUMA+=primo;  //sumanos los primos
                cout<<SUMA<<endl;
		}
		j++;
		cont=0;
    }
    cout<<"la suma es: "<<SUMA<<endl;
}

int main()
{

    return 0;
}
