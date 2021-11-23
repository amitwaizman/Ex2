
#include <stdio.h>
#include <math.h>
#define N 10


int matrix [N][N];

 void helpMatrix(){
   for (int k = 0; k < N; k++){
     for (int i = 0; i < N; i++) {
         for (int j = 0; j < N;j++) {
             int a= matrix[i][k];
             int b=matrix[k][j];
             int sum=0;
             if(i==j){
               matrix[i][j]=0;
             }else if(a==0||b==0){ 
               sum=0;
             }else {sum=matrix[i][k]+matrix[k][j];}
               if(matrix[i][j]>sum&&sum!=0){
               matrix[i][j]=sum;   
              }else if(matrix[i][j]==0){
                  matrix[i][j]=sum; 
              }   
              } 
         }
     }      
  }
 

 
 void Matrix1 (){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j< N; j++)   {
            scanf("%d\n",&matrix[i][j]);
        }    
    }
    helpMatrix();
 }

        

void Matrix2 (int i, int j){
  if(matrix[i][j]!=0){
     printf("True\n");
  }else{ printf("False\n");}
}


 
void  Matrix3 (int i, int j){
   if(matrix[i][j]==0){
     printf("-1\n");
   }else{
   printf("%d\n" ,matrix[i][j]);
   }
   } 


