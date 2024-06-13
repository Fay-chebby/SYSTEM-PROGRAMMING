#include <stdio.h>
#include <math.h>

int main(){

    int n, closest_num;

     printf("Please enter your number:");
     scanf("%d" ,&n);

    if(n % 2 != 0){
     closest_num = (int)sqrt(n) + 1;
    }
    else{
        closest_num = (int)sqrt(n);
    }

     printf("Closest integer with a whole number is:%d\n", closest_num);

    return 0;

}