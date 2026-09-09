#include<stdio.h>

int main(){
    int f=1;
    int n,a;
    printf("Enter n and a value: \n");
    scanf("%d %d", &n, &a);
    int nfact = 1, afact = 1, nMinusafact = 1;
    for(int i=1; i<=n; i++){
        nfact *= i;
    }
        for(int i=1; i<=a; i++){
        afact *= i;
    }
        for(int i=1; i<=(n-a); i++){
        nMinusafact *= i;
    }
    printf("Result: %d\n", nfact/afact*(nMinusafact));
    return 0;
}