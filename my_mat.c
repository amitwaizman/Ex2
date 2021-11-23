
#include <stdio.h>
#include <math.h>
#define N 4
#define true 1
#define false 0

int matrix [N][N];

 void helpMatrix(){
   for (int k = 0; k < N; k++){
     for (int i = 0; i < N; i++) {
         for (int j = 0; j < N;j++) {
             int a= matrix[i][k];
             int b=matrix[k][j];
             int sum=0;
             if(a==0||b==0){ sum=0;}
             else{sum=matrix[i][k]+matrix[k][j];}
               if(matrix[i][j]>sum&&sum!=0){
               matrix[i][j]=sum;   
              }else if(matrix[i][j]==0){
                  matrix[i][j]=sum; 
              }   
              } 
         }
     }      
  }
 

void stringM(){
    for (int i = 0; i <N; i++){
         for (int j = 0; j <N; j++){
       printf("%d", matrix[i][j]);
    }
    
}
}
 
 void Matrix1 (){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j< N; j++)   {
            scanf("%d",&matrix[i][j]);
        }    
    }
        stringM();
    helpMatrix();
    stringM();
 }

        

void Matrix2 (int i, int j){
  if(matrix[i][j]!=0){
     printf("True");
  }else{ printf("False");}
}


 
void  Matrix3 (int i, int j){
   printf("%d" ,matrix[i][j]);
   } 


