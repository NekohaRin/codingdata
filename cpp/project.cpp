#include <bits/stdc++.h>
using namespace std;

//deklarasi login
int i,pilih;
string username, password;
string user[5] = { "admin", "admin 3", "admin 4", "admin 5"};
string pass[5] = { "111", "12347", "12348", "12349"};
//note setiap deklarasi nanti tolong bilang di grup

//menu login
void login(){
    do{
        system("cls");
        cout << setfill('-') << "+" << setw(40) << "+" << endl;
        cout << setfill(' ') << "|" << setw(15) << " " << "L O G I N" << setw(16) << "|" << endl;
        cout << setfill('-') << "+" << setw(40) << "+" << endl;
        cout << " Enter your username: "; cin >> username;
        cout << " Enter your password: "; cin >> password;
    }while(username != user[i] && password != pass[i]);
    cout << setfill('-') << "+" << setw(40) << "+" << endl;
    system("pause");
}

//menu utama
void menu(){
    system("cls");
    cout << setfill('-') << "+" << setw(30) << "+" << endl;
    cout << setfill(' ') << "|" << setw(10) << " " << "MENU UTAMA" << setw(10) << "|" << endl;
    cout << setfill('-') << "|" << setw(30) << "|" << endl;
    cout << setfill(' ') << "| 1. Lihat Data Persediaan" << setw(5) << "|" << endl;
    cout << setfill(' ') << "| 2. Edit Data Persediaan" << setw(6) << "|" << endl;
    cout << setfill(' ') << "| 3. History Data Perseiaan" << setw(4) << "|" << endl;
    cout << setfill(' ') << "| 4. Keluar" << setw(20) << "|" << endl;
    cout << setfill('-') << "+" << setw(30) << "+" << endl;
    cout << "PILIH MENU : "; cin >> pilih;
}

//lihat data persediaan
void one(){
    int max = 100, type, total = 15;
    string food[max] = {        
        "Sari Roti", "Asahi Sardines", "Topoki", "Instant Noodle Udon","Oreo","Biskuit","Taro","OOPS Cracker","Roma Sari Gandum", "Happy Tos","Oat Quaker","Beng-Beng","Slai O'lai","Good Time","Nextar"
        };
        string drink[max] = {
        "Nestle Bear Brand",  "Coca Cola", "Fanta", "Susu", "Aqua", "Yogurt", "Le Minerale", "Pocari Sweat", "Fruit Tea", "Jasmine Tea", "Juice Kacang Hijau", "Buavita Guava", "Floridina Juice Pulp Orange", "Nutrisari Juice Drink", "Greenfield Uht Milk"
        };       // Minuman
    string groceries[max] = {
        "Beras","Telur Ayam","Margarine","Saus Tiram","Minyak Goreng","Tepung Tapioka","Bawang Merah","Gula Pasir","Gula Batu","Gula Jawa","Mie Telur","Tepung sagu","Tepung Tapioka","Tepung Terigu","Tepung Beras"
    };   // Sembako
    string home_Appliance[max] = {
        "Gayung","Ember","Gantungan Handuk","Sikat Gigi","Rak","Keset","Wajan","Alat Penanak Nasi","Setrika","Mixer","Blender","Tempat Sampah","Sapu","Kain Pel","Kain Lap"
    }; // Alat Rumah Tangga

    cout << "Berikut isi data persediaan:\n";
    cout << "1. Makanan\n";
    cout << "2. Minuman\n";
    cout << "3. Sembako\n";
    cout << "4. Alat Rumah Tangga\n";
    cout << "5. Kembali\n";
    cout << "Pilih yang ingin Anda tampilkan: ";
    cin >> type;

    switch (type) {
        case 1:
            cout << "Daftar Makanan:\n";
            for (int x = 0; x < total; x++) {
                cout << x + 1 << ". " << food[x] << endl;
            }
            break;
        case 2:
            cout << "Daftar Minuman:\n";
            for (int x = 0; x < total && !drink[x].empty(); x++) {
                cout << x + 1 << ". " << drink[x] << endl;
            }
            break;
        case 3:
            cout << "Daftar Sembako:\n";
            for (int x = 0; x < total && !groceries[x].empty(); x++) {
                cout << x + 1 << ". " << groceries[x] << endl;
            }
            break;
        case 4:
            cout << "Daftar Alat Rumah Tangga:\n";
            for (int x = 0; x < total && !home_Appliance[x].empty(); x++) {
                cout << x + 1 << ". " << home_Appliance[x] << endl;
            }
            break;
        case 5:
            cout << "Kembali ke menu utama.\n";
            menu();
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            break;
    }

    /*
    buat persediaan berdasarkan type (makanan, minuman, sembako, alat rumah tangga, kembali)
    dalam setiap nagian tersebut nanti akan menampilkan nama baran & jumlah persediaan
    untuk setelah itu bisa dikreasikan sendiri terkait tampilan dll
    */
    cout << "one" << endl;
    system("pause");
    menu();
}

//edit data persediaan
void two(){
    /*
    menampilkan pilihan edit (makanan, minuman, sembako, alat rumah tangga)
    setelah itu opsi edit(menambah, mengurang, kembali)
    untuk setelah itu bisa dikreasikan sendiri terkait tampilan dll
    */
    cout << "two" << endl;
    system("pause");
    menu();
}

//history data persediaan
void three() {
    /*
    membuat menu(barang ditambahkan , barang dikurangi, kembali)
    dalam format setiap menu (nama barang, jumlah edit(ex:-10/+10), tanggal edit)
    untuk setelah itu bisa dikreasikan sendiri terkait tampilan dll
    */
    cout << "three" << endl;
    system("pause");
    menu();
}

int main(){
    login();
    menu();
    switch(pilih){
        case 1:
        one();
        break;

        case 2:
        two();
        break;

        case 3:
        three();
        break;
        
        case 4:
        login();
        break;

        default:
        menu();
        break;
    }
}