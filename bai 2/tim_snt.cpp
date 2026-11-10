#include <stdio.h>
int main(){
    int n;
	int dem = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    if(n < 2){
        printf("%d khong phai la so nguyen to", n);
    }
    else{
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                dem++;
            }
        }
        if(dem == 2){
            printf("%d la so nguyen to", n);
        }
        else{
            printf("%d khong phai la so nguyen to", n);
        }
    }
    return 0;
}

