# include <stdio.h>

int main() {

    int selection[5] = {1, 26, 5, 4, 16};
    int i, k, temp, count;

    for (k = 0; k < 5; k++) {
        count = k; // The useage of "count" is for the change in line 19 and 20
        for (i = k + 1; i < 5; i++) {

            if (selection[count] > selection[i]) {
                count = i;

            }
        }

        temp = selection[k];
        selection[k] = selection[count]; 
        selection[count] = temp;   
    } 

    for (i = 0; i < 5; i++) {
        printf("%i ", selection[i]);
    }

}