#include <stdio.h>
void maior(int a, int b, int c, int *m){
    if ((a > b) && (a > c))
        *m = a;
    else if ((b > a) && (b > c))
        *m = b;
    else
        *m = c;
}

int main(){
    int a, b, c, m;

    scanf("%d %d %d", &a, &b, &c);

    maior(a, b, c, &m);

    printf("%d", m);
}
