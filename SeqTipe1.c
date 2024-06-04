/*
Nama    		: Hasan Suryadharma
NIM     		: 24060123140208
Nama Program 	: SeqSearch1.c
Deskripsi 		: Mencari elemen yang sudah di tentukan pada array
*/

#include <stdio.h>
int main() {

    //Kamus 

    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = sizeof(T) / sizeof(T[0]);
    int X1 = 10;
    int X2 = 70;
    int hasil1 = 0; 
    int hasil2 = 0; 
    int i;

    //Algoritma
    
    for (i = 0; i < N; i++) {
        if (T[i] == X1) {
            hasil1 = X1; 
            break;
        }
    }

    for (i = 0; i < N; i++) {
        if (T[i] == X2) {
            hasil2 = X2; 
            break;
        }
    }

    printf("a. X = %d -> Output: %d\n", X1, hasil1);
    printf("b. X = %d -> Output: %d\n", X2, hasil2);

    return 0;
}