#include <stdio.h>
#include <math.h>
void giai_ptb2(float a, float b, float c){
    if(a==0){
        if(b==0){
            if(c==0) printf("VSN");
            else printf("VN");
        }
        else printf("%.3f",-c/b);
    }
    else{
        float denta = b*b - 4*a*c;
        if(denta<0) printf("VN");
        if(denta==0) printf("%.3f",-b/(2*a));
        if(denta>0){
            float x1 = (-b+sqrt(denta))/(2*a);
            float x2 = (-b-sqrt(denta))/(2*a);
            if(x1<x2){
                printf("%.3f %.3f",x1,x2);
            }
            else{
                printf("%.3f %.3f",x2,x1);
            }
        }
    }
}
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    giai_ptb2(a,b,c);
    return 0;
}
