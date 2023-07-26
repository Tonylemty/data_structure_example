#include <stdio.h>

int main() {

    int insertion[5] = {26, 1, 5, 4, 16};
    int i, k, j, temp;

    for (i = 0; i < 5; i++) {

        temp = insertion[i];

        for (k = 0; k < i; k++) {
            if (insertion[k] > temp) {
                break;
            }
        } 

        for (j = i; j > k; j--) {
            insertion[j] = insertion[j - 1];
        }
        
        insertion[k] = temp;

    }


    for (i = 0; i < 5; i++) {
        printf("%d ", insertion[i]);
    }


}