#include <stdio.h>

int main() {
    int rows = 6;
    int cols = 6;
     for (int i = 1; i<= rows; i++){
            for(int j = 1; j<= i && j <= cols; j++){

                    printf("%d , j");
            }
            printf("\n");

      }
      return 0;
}

