//the user provides the values of p, n,r and the comp processes the si
// author: elma; date:6/8/25
# include<stdio.h>
int main(){
    int p,n ;
    float r, si ;
    printf(" enter the priciple amt : \n"); 
    printf(" enter the value of n: \n");
    printf("enter the value of r: \n");
    scanf("%d , %d , %f", &p , &n, &r);
    si= p*n*r/100; //the formula to calculate si/ simple interest
    printf(" the calculated simple interest is: %f", si);

}