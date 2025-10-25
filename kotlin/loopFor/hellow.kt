// fun main() {
//     val nilaiGanjil = 1.rangeTo(10) step 2
//     for (nilai in nilaiGanjil){
//         println("Nilai: $nilai")
//     }
// }

// fun main() {
//     val tambahan = 10000
//     var tabunganAwal = 10000
//     var totalTabungan = 0
//     for (minggu in 1..10){
//         totalTabungan += tabunganAwal
//         println("Total tabungan di minggu ke-$minggu : Rp $totalTabungan")
//         tabunganAwal += tambahan
//     }
//     println("\nTotal tabungan selama 10 minggu : Rp $totalTabungan")
// }

fun main() {
    var bulanTerakhirMenabung = 10
    var totalTabungan = 10000
    var tabunganAwal = 0
    for(week /*week ini bebas namanya untuk pengambilan urutan */ in 1..bulanTerakhirMenabung){
        tabunganAwal += totalTabungan
        println("Total tabungan di minggu ke-$week: Rp $tabunganAwal")
        totalTabungan += 10000
    }
    println("Total tabungan selama 10 minggu: Rp $tabunganAwal")
}
/*
    -----------NOTE TAKING-------------
    penggunaan range untuk mensupport loop for
    contoh range :
    1..10 dan 1rangeTo 10 artinya 1,2,3,4,5,6,7,8,9,10 ( hitung maju dari kecil ke besar )
    1..10 step 2 artinya hitungan setiap selisih 2 -> 1,3,5,7,9 (lompatan bilangan bebas 2,5,10,100,... yang penting positif)
    10downTo1 artinya hitung mundur ( 10,9,8,7,6,5,4,3,2,1 )
 */