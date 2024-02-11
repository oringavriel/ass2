
#include <stdio.h>
#include "my_mat.h"

#define rows 10
#define cols 10


void initArr(int arr[][cols]){

    int i, j;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
         scanf( "%d", &arr[i][j]);
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
    if(arr[t][t1]!=0 && t>-1&& t1>-1&& t1<=cols &&t<=rows){
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






