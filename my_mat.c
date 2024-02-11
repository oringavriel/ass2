
#include <stdio.h>
#include "my_mat.h"

#define rows 10
#define cols 10
#define max 99999999


void initArr(int arr[][cols]){

    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
              int t;
         scanf( "%d", &t);
         if(t==0 && i!=j){
             arr[i][j]=max;
         }
         else{
             arr[i][j]=t;
         }
        }
    }



}

void isPath(int arr[][cols])
{
    int i, j, z;
    for (z=0; z<rows;z++) {
      for (i=0;i<rows;i++) {
         for (j=0;j<cols;j++) {
             if (arr[i][z] + arr[z][j] < arr[i][j]){

                    arr[i][j] = arr[i][z] + arr[z][j];

             }

        }

         }

        }
    int t;
    int t1;
    scanf("%d",&t);
    scanf("%d",&t1);
    if(arr[t][t1]!=0 && t>-1&& t1>-1&& t1<cols &&t<rows){
        printf("True");
    }
    else{
          printf("False");
    }

}

void shortestPath(int arr[][cols])
{
    int i, j, z;
    for (z=0; z<rows;z++) {
      for (i=0;i<rows;i++) {
         for (j=0;j<cols;j++) {
             if (arr[i][z] + arr[z][j] < arr[i][j]){

                    arr[i][j] = arr[i][z] + arr[z][j];

             }

        }

         }

        }

int t;
    int t1;
    scanf("%d",&t);
    scanf("%d",&t1);
    if(arr[t][t1]==0 || t<0 || t1<0 || t1>cols || t>rows){
        printf("-1");}
        else{
            printf("%d",arr[t][t1]);
        }

    }






