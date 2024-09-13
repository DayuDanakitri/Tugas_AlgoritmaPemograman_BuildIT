#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char kataPertama[255];
    char kataKedua[255];
    scanf("%s", kataPertama);
    scanf("%s", kataKedua);
    
    if(strlen(kataPertama) != strlen(kataKedua)){
        printf("BERBEDA");
        return 0;
    }
    
    int index;
    for(index = 0; index < 255; index++){
        if(kataPertama[index] == '\0' && kataKedua[index] == '\0') break;
        if(kataPertama[index] != kataKedua[index]){
            printf("MIRIP");
            return 0;
        }
    }
    
    printf("IDENTIK");
    return 0;
}