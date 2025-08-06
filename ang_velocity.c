// to calculate angular velocity 
// author: elma ; date: 6/8/25
#include<stdio.h>
int main() {
    float omega , theta , time ; // omega to calculate angular velocity ; theta = angular displacement
    theta= 500;
    time= 10;
    omega= theta/time ;// formula to calculate angular velocity
    printf("The angular velocity is : %f", omega);
}