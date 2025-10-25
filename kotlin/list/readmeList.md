humm list dan array
untuk list(listOf) tidak dapat diubah isinya secara default perlu tambahan mutable(mutableListOf) pada deklarasinya agar bisa diubah sesuka hati

contoh list
fun main() {    
    val anyList = mutableListOf('a', "Kotlin", 3, true)
    println(anyList)
    
    anyList[3] = false // mengubah nilai item pada indeks ke-3
    println(anyList)
    
    anyList.add('d') // menambah item di akhir list
    println(anyList)
    anyList.add(1, "love") // menambah item pada indeks ke-1
    println(anyList)
 
    anyList.removeAt(0) // menghapus item pada indeks ke-0
    println(anyList)
}

perbandingan array list
fun main() {    
    val array = arrayOf("Kotlin", "Java") seperti biasa array menggunakan arrayOf untuk deklarasi

    array[0] = "Dart" // no error
    array.add("JavaScript") // error

    val list = listOf("Kotlin", "Java") default list
    list[0] = "Dart" // error
    list.add("JavaScript") //error

    val mutableList = mutableListOf("Kotlin", "Java") mutable list
    mutableList[0] = "Dart" // no error
    mutableList.add("JavaScript") // no error
}

untuk fleksibilitas ubah atau tambah konten mutableListOf
data mutlak gunakan listOf
data yang isinya kadang diubah gunakan arrayOf