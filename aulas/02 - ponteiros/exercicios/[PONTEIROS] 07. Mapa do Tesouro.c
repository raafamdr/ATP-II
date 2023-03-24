#include <stdio.h>
void analisarMapa(char *mapa, int N, int *X, int *Y) {
    char *valor = (mapa + *X + (*Y)*N);

    if(*valor == 'x')
        return;

    *X += 1;

    if(*X >= N) {
        *X = 0;
        *Y += 1;
    }

    if(*Y >= N)
        return;
    analisarMapa(mapa, N, X, Y);
}

int main(){
    int N, i, j, X=0, Y=0;

    scanf("%d", &N);

    char mapa[N][N];

    for(i=0; i<N; i++)
        for(j=0; j<N; j++)
            scanf(" %c", &mapa[i][j]);

    analisarMapa(&mapa[0][0], N, &X, &Y);

    printf("(%d,%d)", X+1, Y+1);
}
