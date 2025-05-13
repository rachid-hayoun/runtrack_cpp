#include <stdio.h>

int main() {
    int N;
    long long somme = 0;

    printf("Entrez un entier N (>= 5) : ");
    scanf("%d", &N);

    if (N < 5) {
        printf("Erreur : N doit etre supérieur ou egal à 5.\n");
        return 1;
    }

    for (int i = 5; i <= N; i++) {
        somme += (long long)i * i * i;
    }

    printf("La somme des cubes de 5^3 a %d^3 est : %lld\n", N, somme);

    return 0;
}
