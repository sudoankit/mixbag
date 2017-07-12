#include<stdio.h>
#include<math.h>
int main(){
    double x,frac,intp;

    x = 23/22;
    frac = modf(x,&intp);
    printf("%lf \n",x);
    return 0;
}
