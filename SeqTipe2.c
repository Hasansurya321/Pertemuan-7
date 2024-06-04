/*
Nama    		: Hasan Suryadharma
NIM     		: 24060123140208
Nama Program 	: SeqSearch2.c
Deskripsi 		: Mengecek elemen yang sudah ditentukan pada array
*/

#include <stdio.h>

int main() {

    //Kamus 

    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int X1 = 15;
    int X2 = 60;
    int N = sizeof(T) / sizeof(T[0]);
    int hasil1 = 0;
    int hasil2 = 0;
    
    //Algoritma
    
    hasil1 = 0; 
    for (int i = 0; i < N; i++) {
        if (T[i] == X1) {
            hasil1 = X1; 
            break;
        }
    }
   
    hasil2 = 0; 
    for (int i = 0; i < N; i++) {
        if (T[i] == X2) {
            hasil2 = X2; 
            break;
        }
    }

    printf("a. X = %d -> Output: %s\n", X1, hasil1 ? "benar" : "0");
    printf("b. X = %d -> Output: %s\n", X2, hasil2 ? "benar" : "0");

    return 0;
}