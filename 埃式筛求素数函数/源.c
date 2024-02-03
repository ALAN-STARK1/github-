#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int* isprime(int n, int* k);
int main() {
    int n,i,k,num = 0,l[1000];
    int* p = &l;
    scanf("%d", &n);
    p = isprime(n, &k);
    for (i = 0; i < k; i++) {
        num++;
        printf("%d", p[i]);
        if (num % 8 == 0) {
            printf("\n");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
int* isprime(int n,int* k ) {
    (*k) = 0;
    int  j, is[1000] = { 2 }, i, num = 0, l[1000];
    int* p = &is;
    for (i = 0; i <= n; i++) {
        l[i] = 0;
    }
    for (j = 2; j < n; j++) {
        if (l[j] == 0) {
            is[(*k)] = j;
            (*k)++;
            for (i = 0; i * j < n; i++) {
                l[i * j] = 1;
            }
        }
    }
    return p;
}