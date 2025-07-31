#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#include "portable_utils.h"
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM]){

    for(int i = 0; i < TAM; i++){
        if(i != TAM -1){
            cout << vetor[i] << " - ";
        }else{
            cout << vetor[i];
        }
    }

}

int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada){

    int count;
    bool valorFoiEncontrado=false;

    for(count = 0; count<=TAM; count++){
        if(vetor[count] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = count;
        }
    }

    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }

}

int main(){

    int vetor[TAM] = {4,7,99,32,47,85,8,1340,20,3};
    int valorProcurado;
    int posicaoEncontrada;
    
    Clear();

    imprimir_vetor(vetor);
    

    printf("\nQual numero deseja encontrar?");
    printf("\n||");
    scanf("%d", &valorProcurado);

    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
        cout << "O valor foi encontrado na posicao " << posicaoEncontrada << "\n";
    }else{
        cout << "Valor não encontrado\n";
    }

    

    return 0;
}