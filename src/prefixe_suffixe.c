#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "prefixe_suffixe.h"

int prefixe_suffixe(int *T, const unsigned int N)
{
    assert(T != NULL);

    unsigned int suff = N / 2;
    if (N % 2 != 0)
    {
        suff++;
    }

    unsigned int preff = 0;
    unsigned int cpt = 0;

    while (preff < suff && suff < N)
    {
        if (T[suff] == T[preff])
        {
            suff++;
            preff++;
            cpt++;
            if (cpt == N / 2 && N % 2 != 0)
            {
                return 0;
            }
        }

        else if (T[0] == T[N - 1])
            return 1;
            
        else
            return cpt;
    }

    return cpt;

} // fin prefixe_suffixe()
