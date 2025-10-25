fun main() {
    val daftarHadir = mutableListOf("Aulia", "Bayu", "Citra", "Doni", "Eka")
    val namaDicari1 = "Bayu"
    val namaDicari2 = "Bima"
    println("Daftar Mahasiswa yang Hadi Hari Ini: ")
    for (kehadiran in daftarHadir) {
        println("- $kehadiran")
    }

    if(namaDicari1 in daftarHadir) {
        println("$namaDicari1 hadir di kelas hari ini")
    } else {
        println("$namaDicari1 tidak hadir")
    }

    if(namaDicari2 in daftarHadir) {
        println("$namaDicari2 hadir di kelas hari ini.")
    } else {
        println("$namaDicari2 tidak hadir.")
    }
}