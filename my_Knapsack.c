

#include <stdio.h>

#define maxWeight 20
#define arrayLen 5
#define maxChars 20



int max(int a, int b) {
    return (a > b) ? a : b;
}


struct Item {
    char name[maxChars];

   
};


void knapsack(int weight[], int value[], int  selected_bool[]) {
    int i, j;
    int K[arrayLen+ 1][maxWeight + 1];

   
    for (i = 0; i <= arrayLen; i++) {
        for (j = 0; j <= maxWeight; j++) {
            if (i == 0 || j == 0)
                K[i][j] = 0;
            else if (weight[i - 1] <= j)
                K[i][j] = max(value[i - 1] + K[i - 1][j - weight[i - 1]], K[i - 1][j]);
            else
                K[i][j] = K[i - 1][j];
        }
    }

    i = arrayLen;
    j = maxWeight;
    while (i > 0 && j > 0) {
        if (K[i][j] != K[i - 1][j]) {
             selected_bool[i - 1] = 1;
            j -= weight[i - 1];
        }
        i--;
    }
}

int main() {
    int values[arrayLen];
    int weights[arrayLen];
    struct Item items[arrayLen];
    int i;
    int count=0;
   
         for ( i = 0; i < arrayLen; i++) {
         scanf("%s", &items[i].name);
         scanf("%d", &values[i]);
         scanf("%d", &weights[i]);
         count++;
    }  


       
    int selectedItems[arrayLen];
    for ( i = 0; i < arrayLen; ++i){
        selectedItems[i] = 0;
    }

    knapsack( weights, values, selectedItems);
   
    int maxProfit=0;
    for ( i = 0; i < arrayLen; i++) {
        if (selectedItems[i]) {
            maxProfit+=values[i];
           
        }
       
    }
   
    printf("Maximum profit: %d\n", maxProfit);
   
    printf("Selected items: ");
    for ( i = 0; i < arrayLen; i++) {
        if (selectedItems[i]) {
            printf("%s ", items[i].name);
        }
    }
    printf("\n");

    return 0;
}

