#include <stdio.h>

int main() {
    const int SIZE = 6; 
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                
                int b = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = b;
            }
        }
    }
    printf("results = ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    printf("scores = ");
    for (int r = 0; r < SIZE - 1; r++) {
            for (int k = 0; k < SIZE - 1 ; k++) {
                if (scores[k] > scores[k + 1]) { 
                    int temp = scores[k];
                    scores[k] = scores[k + 1];
                    scores[k + 1] = temp;
                }
            }
        }
    for (int r = 0; r < SIZE; r++) {
    printf("%d ", scores[r]);
    }


    printf("\n");

    return 0;
}
