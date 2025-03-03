#include <stdio.h> //header untuk c
#include <conio.h> //header untuk gets function

int main(){
    char nama[50];
    int NIM;
    char kom;
    float IP;

    printf("Hello World!\n");
    printf("Masukkan nama: ");
    gets(nama); //get string
    printf("Masukkan Kom: ");
    scanf("%c", &kom);
    printf("Masukkan NIM: ");
    scanf("%d", &NIM);
    printf("Masukkan IP: ");
    scanf("%f", &IP);

    printf("Hallo %s\n", nama);
    printf("Kom %c\n", kom);
    printf("NIM %d\n", NIM);
    printf("IP %.1f\n", IP);

}