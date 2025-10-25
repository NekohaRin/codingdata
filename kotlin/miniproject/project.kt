fun main(){
    loginMenu()
}

fun loginMenu(){
    println("Gudang Data")
    println("1. Data Mahasiswa")
    println("2. Tambah Data Mahasiswa")
    println("3. Hapus Data Mahasiswa")
    println("4. exit")
    print("Masukkan pilihan anda: ")
    val pilihan = readln().toInt()
    when(pilihan) {
        1 -> println()
        2 -> println("datas")
        3 -> println("datas")
        4 -> println("datas")
    }
}

fun data(){
    val data = mutableListOf(
        "Rehan Wangsaf",
        "Joko Sumedang",
        "Slamet Icikiwir",
        "Farhan Kebab",
        "udin geboy"
    )

    for (daftar in data) {
        println("- $daftar")
    }
}

fun tambahData(){
    print("Berapa jumlah data yang ingin anda tambahkan : ")    
    val tambah = readln().toInt()
}