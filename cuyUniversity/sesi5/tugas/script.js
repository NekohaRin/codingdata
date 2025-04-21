//   REGISTER PAGE
let registerPage = document.getElementById("registerPage");
let email = document.getElementById("email");
let username = document.getElementById("username");
let password = document.getElementById("password");
let register = document.getElementById("register");
let login = document.getElementById("login");
let dirLogin = document.getElementById("dirLogin")
let additional = document.getElementById("additional");
let pemail = document.getElementById("pemail");

login.style.display = "none";

function onRegister() {
  localStorage.setItem("username", username.value);
  localStorage.setItem("password", password.value);
  email.style.display = "none";
  pemail.style.display = "none";
  additional.style.display = "none";
  login.style.display = "block";
  register.style.display = "none";

  if (username.value == ("admin") && password.value == "admin123") {
    localStorage.setItem("role", "admin");
  } else if (username.value == "teknisi" && password.value == "frontend") {
    localStorage.setItem("role", "teknisi");
  } else {
    localStorage.setItem("role", "user");
  } 
  }

function skip() {

}

function onLogin() {
  if (localStorage.key(username.value == "username"  && password.value == "password")) {
  console.log("berhasil")
  } else {
    alert("akun anda belum terdaftar")
  }
}