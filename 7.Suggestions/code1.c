#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    // maximum
    if((a>b)&&(a>c)){
        printf("%d is the maximum value\n", a);
    }
    else if((b>a)&&(b>c)){
        printf("%d is the maximum value\n", b);
    }
    else
        printf("%d is the maximum value\n", c);

    //minimum
    if((a<b)&&(a<c)){
        printf("%d is the minimum value\n", a);
    }
    else if((b<a)&&(b<c)){
        printf("%d is the minimum value\n", b);
    }
    else
        printf("%d is the minimum value\n", c);
    
    return 0;
}