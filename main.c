#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>


int main() {

    int array[10] = {10,9,8,7,6,5,4,3,2,1};
    int key;
    for(int i=1; i<10; i++){
        key = array[i];
        int j = i - 1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j = j -1;
            array[j+1] = key;
        }
    
    }
    
    printf("array[0] = %d\n",array[0]);
    printf("array[1] = %d\n",array[1]);
    printf("array[2] = %d\n",array[2]);
    printf("array[3] = %d\n",array[3]);
    printf("array[4] = %d\n",array[4]);
    printf("array[5] = %d\n",array[5]);
    printf("array[6] = %d\n",array[6]);
    printf("array[7] = %d\n",array[7]);
    printf("array[8] = %d\n",array[8]);
    printf("array[9] = %d\n",array[9]);
    printf("by \n");

}