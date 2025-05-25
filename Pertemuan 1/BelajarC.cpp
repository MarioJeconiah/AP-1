#include <stdio.h> // header untuk C
#include <conio.h> // header untuk fungsi yang akan dipakai seperti getch

int main() { // mulai program utama
    char nama[50]; // deklarasi variabel nama bertipe data char dengan panjang array 50
    int nim; // deklarasi variabel nim bertipe data int
    char kom[2]; // deklarasi variabel kom bertipe data char dengan panjang array 2
    float ip; // deklarasi variabel ip bertipe data float

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : "); //menampilkan output
    gets(nama); // get string

    printf("Masukkan nim : "); // menampilkan output
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // fungsi untuk menerima inputan char

    printf("Masukkan kom : "); // menampilkan output
    gets(kom); // menerima inputan kom

    printf("Masukkan ip : "); // menampilkan output
    scanf("%f", &ip); // menerima inputan ip

    /* Untuk Output */
    printf("Nama : "); // menampilkan output
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // menampilkan output

    printf("KOM : "); // menampilkan output
    puts(kom); // put string, untuk menampilkan output sebagai string
    printf("IP : %f\n", ip); // menampilkan output

    printf("press any button to continue..."); // menampilkan output
    getch(); // menerima inputan char
}
