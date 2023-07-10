document.getElementById("check").onclick = function () {
  var password = document.getElementById("input").value;

  if (password == "javasquad") {
    alert("password anda benar");
  } else {
    alert("password anda salah");
  }
};
