#include <assert.h>
#include <stdlib.h>

#include "prefixe_suffixe.h"

int prefixe_suffixe(int *T, const unsigned int N){
  assert(T != NULL);

  unsigned int k = N-1;
  unsigned int j = N-k;
  unsigned int i = 0;
  unsigned int cpt = 0;

  while (k > 0){
    while(i < k){
      if(T[i] == T[j]){
        i++;
        j++;
        cpt++;
      }

      if (T[i] != T[j]){
        i++;
        j++;
        return cpt;
      }
    }
  }

  return cpt;
} // fin prefixe_suffixe()
