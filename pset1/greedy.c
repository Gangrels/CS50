#include <stdio.h>
#include <cs50.h>
#include <math.h>

 int main (void){
  float f;
    do{
    printf("O hai! How much change is owed?\n");
    f = GetFloat(); 
    }
    while (f < 0.0);
  
    float z = round(f*100);
    int n = z;
  

    int Q[] = { 25, 10, 5, 1}; 
    int q, x; 
 
    x=0; 
    for(int i = 0; i < 4; ++i){
     q = Q[i]; 
     x += n / q; 
     n %= q;  
    }
  printf("%d\n",x); 
 return 0;
}
