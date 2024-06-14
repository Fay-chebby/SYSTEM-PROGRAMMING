#include <stdio.h>
#include <math.h>

int main(){

    int n, closest_num;

     printf("Please enter your number:");
     scanf("%d" ,&n);
     

    if(n % 2 != 0){
     closest_num = (int)sqrt(n) + 0.5;
     closest_num = closest_num * closest_num;
    }
    else{
        closest_num = (int)sqrt(n + 1) + 0.5;
        closest_num = closest_num * closest_num;
    }

     printf("Closest integer with a whole number is:%d\n", closest_num);

    return 0;

}