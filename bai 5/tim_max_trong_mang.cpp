#include <stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int tong = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            tong += i;
        }
    }
    if(n > 0 && tong == n){
        printf("%d la so hoan hao", n);
    }
    else{
        printf("%d khong phai la so hoan hao", n);
    }
    return 0;
}

