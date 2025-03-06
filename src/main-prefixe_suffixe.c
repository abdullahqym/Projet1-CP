#include <stdio.h>

#include "prefixe_suffixe.h"

int main(){
  // const unsigned int N1 = 9;
  // const unsigned int N2 = 10;
  // const unsigned int N3 = 9;
  // int T1[N1] = {1,4,2,4,5,1,4,2,4};
  // int T2[N2] = {1,2,3,2,1,1,2,3,2,1};
  // int T3[N3] = {3,2,3,2,1,2,3,2,1};

  // printf("Longueur plus long préfixe/suffixe de T1: %u\n", prefixe_suffixe(T1, N1));
  // printf("Longueur plus long préfixe/suffixe de T2: %u\n", prefixe_suffixe(T2, N2));
  // printf("Longueur plus long préfixe/suffixe de T3: %u\n", prefixe_suffixe(T3, N3));
  
  int T4[10] = {5, 6, 7, 6, 5, 5, 6, 7, 6, 5};
  int T5[7] = {9, 8, 7, 6, 7, 8, 9};
  int T6[7] = {4, 4, 4, 4, 4, 4, 4};
  int T7[6] = {1, 2, 3, 4, 5, 6};
  int T8[14] = {7, 6, 5, 4, 3, 2, 1, 7, 6, 5, 4, 3, 2, 1};

  printf("Longueur plus long préfixe/suffixe de T4: %u\n", prefixe_suffixe(T4, 10));
  printf("Longueur plus long préfixe/suffixe de T5: %u\n", prefixe_suffixe(T5, 7));
  printf("Longueur plus long préfixe/suffixe de T6: %u\n", prefixe_suffixe(T6, 7));
  printf("Longueur plus long préfixe/suffixe de T7: %u\n", prefixe_suffixe(T7, 6));
  printf("Longueur plus long préfixe/suffixe de T8: %u\n", prefixe_suffixe(T8, 14));

}
