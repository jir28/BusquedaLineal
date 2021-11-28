#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscar(int numeros[],int n_p,int objetivo){//Busqueda lineal
    int posicion = 1,en=0;
    while (posicion<=n_p){
        if (objetivo == numeros[posicion]){
            posicion = posicion+1,en=1;
            printf("Se encontro el objetivo %d en la posicion %d \n",objetivo,posicion);
            break;
        }
        posicion = posicion + 1;
    }
    if (en == 0){
        printf("No se encontro");
    }
    return 0;
}

void imprimir (int numeros[], int n_p){//Imprimir los numeros
    for (int i = 0;i < n_p;i++){
        printf("%d\n",numeros[i]);
    }
}
void generar(int numeros[],int n_p){ //Generar los numeros
    srand(time(NULL));
    for (int i = 0;i < n_p;i++){
        numeros[i] = rand() % 10;//Generamos los numeros
    }
}
int main() {
    int n_p=10,objetivo,numeros[n_p];
    printf("Ingrese el objetivo de busqueda\n");
    scanf("%d",&objetivo);
    generar(numeros,n_p);
    imprimir(numeros,n_p);
    buscar(numeros,n_p,objetivo);
    return 0;
}
