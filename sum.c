#include <stdio.h>
#include <math.h>
int res=0;
int sum(double n, double d){
    if(d==-1){
        return 0;
    }
    else{
        double p=pow(10,d-1);
        res= res+(int)(n/p);
        double m=fmod(n,p);
        d--;
        sum(m,d);
        return res;

    }
}

int main(){
    double n,d;
    printf("How many digits?\n");
    scanf("%lf",&d);
    printf("Enter the number\n");
    scanf("%lf",&n);
    printf("The sum of digit is %d",sum(n,d));
    return 0;

}
