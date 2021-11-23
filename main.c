#include<stdio.h>
#include "my_mat.h"
#define true 0
int main(){
     char ans1;

 while (1)  {
        scanf("%c", &ans1);
    
  
 if(ans1=='A'){
     Matrix1();
 }
 if(ans1=='B'){
     int i,j;
     scanf("%d%d",&i,&j);
    Matrix2(i,j);
 }
 if(ans1=='C'){
      int i,j;
     scanf("%d%d",&i,&j);
      Matrix3(i,j);
 }
 if(ans1=='D'){
   return 0; 
 }
    }

    return 0;
}
