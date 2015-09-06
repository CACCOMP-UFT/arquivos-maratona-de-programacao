#include <stdio.h>
 
int main () {
    int A, C;
    int anterior, passos, atual, i;
     
    scanf ("%d%d", &A, &C);
    while (A != 0 && C != 0) {
        scanf ("%d", &anterior);
        passos = A - anterior;
         
        for (i = 1; i < C; i++) {
            scanf ("%d", &atual);
            if (atual < anterior) passos += (anterior-atual);
            anterior = atual;
        }
 
        printf ("%d\n", passos);
     
        scanf ("%d%d", &A, &C);
    }
    return 0;
}
