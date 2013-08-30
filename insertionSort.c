#include <stdlib.h>
#include <stdio.h>

int main(){
 int i, j, chave;
 int v[5] = {1, 22, 5, 10, 5};

 for(i = 1; i < 5; i++){
   chave = v[i];
   j = i-1;
   while((j > 0) && (v[j] > chave)){
    v[j+1] = v[j];
    j--;
   }
   v[j+1] = chave;
 }

 for(i = 0; i < 5; i++)
  printf("%d, ", v[i]);

 printf("\n");
 return 0;
}
