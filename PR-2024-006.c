#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void tang(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void giam(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-1; j++){
            if (a[j] < a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void xuat(int a[], int n){
    for (int i = 0 ; i < n ; ++i){
        printf("%d ", a[i]);
    }
}
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while (t--){
        int n, m;
        scanf("%d %d", &n, &m);
        getchar();
        char rule;
        scanf("%c", &rule);
        int a[n];
        int b[m];
        for (int i = 0; i < n; ++i){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < m; ++i){
            scanf("%d", &b[i]);
        }
        int c[n + m];
        for (int i = 0; i < n; ++i){
            c[i] = a[i];
        }
        for (int i = 0; i < m; ++i){
            c[n + i] = b[i];
        }
        if (rule == 'F'){
            xuat(a,n);
            xuat(b,m);    
            printf("\n");
        }
        else if (rule == 'T'){
            tang(c,n+m);
            xuat(c,n+m);
            printf("\n");
        }
        else if (rule == 'G') {
            giam(c,n+m);
            xuat(c,n+m);
            printf("\n");
        }
        else if(rule == 'A'){
            xuat(b,m);
            xuat(a,n);
            printf("\n");
        }
    }
}