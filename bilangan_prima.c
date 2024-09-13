#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int bilangan;
    scanf("%d", &bilangan);
    
    int index;
    for(index = 2; index <= bilangan/2+1 ; index++){
        if(bilangan%index==0){
            printf("BUKAN");
            return 0;
        }
    }
    
    printf("PRIMA");
    
    return 0;
}