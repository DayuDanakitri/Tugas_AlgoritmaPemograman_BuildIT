#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void tukar(int* bilanganPertama, int* bilanganKedua)
{
    int sementara = *bilanganPertama;
    *bilanganPertama = *bilanganKedua;
    *bilanganKedua = sementara;
}

void sort(int semuaNilai[], int jumlahNilai)
{
    int indexPertama, indexKedua;
    for (indexPertama = 0; indexPertama < jumlahNilai - 1; indexPertama++) {
        for (indexKedua = 0; indexKedua < jumlahNilai - indexPertama - 1; indexKedua++) {
            if (semuaNilai[indexKedua] > semuaNilai[indexKedua + 1]) {
                tukar(&semuaNilai[indexKedua], &semuaNilai[indexKedua + 1]);
            }
        }
    }
}

int main() {

    int jumlahNilai; 
    scanf("%d", &jumlahNilai);
    int semuaNilai[jumlahNilai];
    int index;
    for(index = 0 ; index < jumlahNilai ; index++){
        scanf("%d",&semuaNilai[index]);
    } 
    
    sort(semuaNilai,jumlahNilai);
     for(index = 0 ; index < jumlahNilai ; index++){
        printf("%d\n",semuaNilai[index]);
    } 
   
       
    return 0;
}
