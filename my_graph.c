
#include <stdio.h>
#include "my_mat.h"
#define rows 10
#define cols 10


int main()
{
   int arr[rows][cols];
   char pick;
    pick= getchar();

    while(pick!='D' || pick==EOF){

        if(pick=='A'){
         initArr(arr);
        }


       else if(pick=='B'){
          isPath(arr);
        }

        else if(pick=='C'){
          shortestPath(arr);
        }

      pick= getchar();


    }



    return 0;
}

