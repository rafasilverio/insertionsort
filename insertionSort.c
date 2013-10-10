#include <stdlib.h>
#include <stdio.h>

/**Exemplo de ordenação usando insertionSort*/
int main(){
 int i, j, chave;
 int v[5] = {1, 22, 5, 10, 5};

 /**O insertionSort "separa" uma chave do vetor e compara com as demais posições, 
    caso ache o local devido da chave ele abre um espaço com o while e a insere no
    local adequado*/
 for(i = 1; i < 5; i++){
   chave = v[i]; /*chave*/
   j = i-1;
   while((j > 0) && (v[j] > chave)){ /*loop que "abre" o espaço para a chave*/
    v[j+1] = v[j];
    j--;
   }
   v[j+1] = chave;
 }

 /*Loop para o print da sequancia*/
 for(i = 0; i < 5; i++)
  printf("%d, ", v[i]);

 printf("\n");
 return 0;
}
