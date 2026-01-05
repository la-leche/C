#include <stdio.h>

 double itterPow(int x, int y){

     double res = x;

     for(int i = 1; i < y; i++){
         res=res * (double)x;
     }
     return res;
 }

 double res=1;

 double recPow(int x, int y){


     if(y!=0){
         res = res * x;
         recPow(x, y-1);
     }

     return res;
 }


 int main(){

     printf("rec: %.2f, itter: %.2f\n",recPow(2,7), itterPow(2,7));


     return 0;
 }