fun main() {
        val emailPendaftar = listOf(
        "alice@gmail.com",
        "bob@gmail.com",
        "charlie@gmail.com",
        "alice@gmail.com",
        "diana@gmail.com"
    )

    val emailterdaftar = emailPendaftar.toMutableSet() /* untuk mengubah list ke set */

    for (email in emailPendaftar) {
        println("Email '$email' berhasil didaftarkan")
    }
    println("Daftar email yang sudah terdaftar: ")
    for (added in emailPendaftar) {
        if (added in emailterdaftar)
        println(added)
    }
    
}