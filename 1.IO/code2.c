#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float area,s;
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is %.2f\n",area);
    
    return 0;
}