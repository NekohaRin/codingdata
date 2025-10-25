fun sum(harga: Double, diskon: Double): Double {
    val total: Double = harga - (harga * diskon / 100)
    return total
}

fun main () {
    var hargaBarang = 200000.0
    var persenDiskon = 15.0
    val hasil: Double = sum(hargaBarang, persenDiskon)
    println("Harga Awal: $hargaBarang")
    println("Diskon: $persenDiskon%")
    println("Harga setelah diskon: $hasil")
}
