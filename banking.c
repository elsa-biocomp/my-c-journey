// calculation of simple interest 
// author: elma ; date : 6/8/25
# include<stdio.h>

int main() {
    int p , n ; // p= principal ; n= no. of years
    float r, si ; // r= rate ; si= simple interest 
    p= 1000;
    n= 3;
    r= 8.5 ;
    si= p*n*r/100 ; // formula for simple interest 
    printf ("%f ", si);
}