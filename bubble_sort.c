#include <stdio.h>


int main(){
    
    int bubble[5] = {1, 26, 5, 4, 16};
    int i, temp, count;
    

    while (1 == 1) {
        count = 1;

        for (i = 0; i < 4; i++) { // 4 is the comparation of times
            if (bubble[i] > bubble[i + 1]) {

                temp = bubble[i];
                bubble[i] = bubble[i + 1];
                bubble[i + 1] = temp;
                count = 0;
            
            } 
        } if (count == 1) {
            break;
        }

    } for (i = 0; i < 5; i++) {
        printf("%d ", bubble[i]);
    }

    return 0;
}