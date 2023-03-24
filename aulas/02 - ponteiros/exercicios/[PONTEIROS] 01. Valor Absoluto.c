#include <stdio.h>
void absolute(int *n){
    if (*n < 0)
        *n = *n * -1;
}

int main(){
    int n;

    scanf("%d", &n);

    absolute(&n);

    printf("%d", n);
}
