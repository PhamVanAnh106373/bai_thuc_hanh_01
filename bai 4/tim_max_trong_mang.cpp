#include<stdio.h>
int ucln(int a, int b) {
    while(b != 0) {
        int du = a % b;
        a = b;
        b = du;
    }
    return a;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",ucln(a,b));
    return 0;
}
