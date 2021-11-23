#include<stdio.h>
#include "my_mat.h"
#define true 0

/*A - Perform function # 1
B - Perform function # 2
C - Perform function # 3
D - Exit the program*/

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
