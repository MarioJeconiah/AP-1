#include <iostream> // header untuk c++
#include <string> // header untuk kelas string
using namespace std; // Menggunakan namespace agar tidak perlu tulis std :: pada penggunaan library    

int main(){ // mulai program utama
    int nilai; // inisialisasi variabel nilai dengan tipe data integer

    cout << "Masukkan nilai: "; // menampilkan output
    cin >> nilai; // menerima inputan dan disimpan di variabel nilai

    // if statement 
    /* if (nilai <= 65){  pengkondisian jika nilai dari variabel nilai <= 65 maka jalankan instruksi
        cout << "Anda tidak lulus" << endl; menampilkan output
    } */

    // if-else statement
    /* if (nilai <= 65){ pengkondisian jika nilai dari variabel nilai <= 65 maka jalankan instruksi
        cout << "Anda tidak lulus" << endl; menampilkan output
    }   else { jika pengkondisian tidak ada yang benar
        cout << "Anda lulus" << endl; menampilkan output
    } */

    // if else if statement
    /* if (nilai == 100){ pengkondisian jika nilai dari variabel adalah 100 maka jalankan instruksi
        cout << "Anda kece" << endl; menampilkan output
    }  else if (nilai <= 65) { jika kondisi yang sebelumnya salah maka pengkondisian ini dijalankan apakah nilai <= 65
        cout << "Anda tidak lulus"; menampilkan output
    }  else { jika kondisi diatas tidak ada yang memenuhi maka instruksi ini akan dijalankan
        cout << "Anda lulus" << endl; menampilkan output
    } */

    // nested if pengkondisian didalam kondisi
    /* if (nilai <= 65){ jika nilai <= 65 maka jalankan instruksi
        cout << "Anda tidak lulus" << endl; menampilkan output
    }   else { jika pengkondisian salah maka jalankan instruksi ini
          if (nilai == 100){ pengkondisian jika nilai sama dengan 100 maka jalankan instruksi ini
            cout << "Anda lulus dan anda kece" << endl; menampilkan output
          } else { jika pengkondisian salah jalankan instruksi ini
            cout << "Anda lulus" << endl; menampilkan output
          }
    } */

    // switch case
    /* switch (nilai) { mengecek isi dari variabel nilai dan memberikan instruksi untuk tiap kondisi
        case 1: jika nilai 1 jalankan instruksi berikut
            cout << "Senin" << endl; menampilkan output
            break; keluar dari pengkondisian
        case 2: jika nilai 2 jalankan instruksi berikut
            cout << "Selasa" << endl; menampilkan output
            break; keluar dari pengkondisian
        case 3: jika nilai 3 jalankan instruksi berikut
            cout << "Rabu" << endl; menampilkan output
            break; keluar dari pengkondisian
        case 4: jika nilai 4 jalankan instruksi berikut
            cout << "Kamis" << endl; menampilkan output
            break; keluar dari pengkondisian
        case 5: jika nilai 5 jalankan instruksi berikut
            cout << "Jumat" << endl; menampilkan output 
            break; keluar dari pengkondisian
        case 6: jika nilai 6 jalankan instruksi berikut
            cout << "Sabtu" << endl;  menampilkan output
            break; keluar dari pengkondisian
        case 7: jika nilai 7 jalankan instruksi berikut
            cout << "Minggu" << endl; menampilkan output
            break; keluar dari pengkondisian
        default: jika tidak ada kondisi yang benar jalankan instruksi berikut
            cout << "Inputan tidak valid" << endl; menampilkan output
    } */

    /*switch (nilai){ mengecek isi dari variabel nilai dan memberikan instruksi untuk tiap kondisi
    case 85 ... 100 : cout << "A" << endl; break; // rentang nilai 85 sampai 100, tampilkan "A"
    case 80 ... 84 : cout << "B+" << endl; break;  // rentang nilai 80 sampai 84, tampilkan "B+"
    case 75 ... 79 : cout << "B" << endl; break;   // rentang nilai 75 sampai 79, tampilkan "B"
    case 70 ... 74 : cout << "C+" << endl; break;  // rentang nilai 70 sampai 74, tampilkan "C+"
    case 65 ... 69 : cout << "C" << endl; break;   // rentang nilai 65 sampai 69, tampilkan "C"
    case 60 ... 64 : cout << "D" << endl; break;   // rentang nilai 60 sampai 64, tampilkan "D"
    default: cout << "E" << endl; break;           // selain rentang di atas, tampilkan "E"
}*/

    /* if (nilai % 2 == 0){ jika sisa bagi nilai dengan 2 adalah 0 maka jalankan instruksi
        cout << "Genap nih" << endl; menampilkan output
        else { jika kondisi salah jalankan instruksi ini
            cout << "Ganjil nih" << endl; menampilkan output
        }
    } */
    
    string checknum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // inisialisasi variabel checknum tipe data string dengan kondisi jika sisa bagi nilai dengan 2 adalah 0 maka checknum adalah "Genap" dan jika kondisi ini salah maka checknum adalah "Ganjil"
    cout << checknum << endl; // menampilkan output

}
