#include <stdio.h>
int main(){
    int a[100], n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int max;
    max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d", max);
    return 0;
}

