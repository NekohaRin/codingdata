// RUANGAN KELUARGA (TOGGLE 1-4)
function saklar(action, lamp) {
  let toggle1 = document.getElementById("default-toggle1");
  let toggle2 = document.getElementById("default-toggle2");
  let toggle3 = document.getElementById("default-toggle3");

  let keluarga1 = document.getElementById("keluarga1");
  let keluarga2 = document.getElementById("keluarga2");
  let keluarga3 = document.getElementById("keluarga3");

  if (toggle1.checked) {
    keluarga1.src = "on.gif";
  } else {
    keluarga1.src = "off.gif";
  }

  if (toggle2.checked) {
    keluarga2.src = "on.gif";
  } else {
    keluarga2.src = "off.gif";
  }

  if (toggle3.checked) {
    keluarga3.src = "on.gif";
  } else {
    keluarga3.src = "off.gif";
  }
}

function pusat1(action, lamp) {
  let pusat1 = document.getElementById("default-toggle4");

  let keluarga1 = document.getElementById("keluarga1");
  let keluarga2 = document.getElementById("keluarga2");
  let keluarga3 = document.getElementById("keluarga3");

  if (pusat1.checked) {
    keluarga1.src = "on.gif";
    keluarga2.src = "on.gif";
    keluarga3.src = "on.gif";
  } else {
    keluarga1.src = "off.gif";
    keluarga2.src = "off.gif";
    keluarga3.src = "off.gif";
  }
}

// RUANGAN MAKAN (TOGGLE 5)
function makan(action, lamp) {
  let toggle5 = document.getElementById("default-toggle5");

  let makan1 = document.getElementById("makan1");

  if (toggle5.checked) {
    makan1.src = "on.gif";
  } else {
    makan1.src = "off.gif";
  }
}

// RUANGAN TIDUR (TOGGLE 6-8)
function tidur(action, lamp) {
  let toggle6 = document.getElementById("default-toggle6");
  let toggle7 = document.getElementById("default-toggle7");

  let tidur1 = document.getElementById("tidur1");
  let tidur2 = document.getElementById("tidur2");

  if (toggle6.checked) {
    tidur1.src = "on.gif";
  } else {
    tidur1.src = "off.gif";
  }

  if (toggle7.checked) {
    tidur2.src = "on.gif";
  } else {
    tidur2.src = "off.gif";
  }
}

function pusat2(action, lamp) {
  let pusat1 = document.getElementById("default-toggle8");

  let tidur1 = document.getElementById("tidur1");
  let tidur2 = document.getElementById("tidur2");

  if (pusat1.checked) {
    tidur1.src = "on.gif";
    tidur2.src = "on.gif";
  } else {
    tidur1.src = "off.gif";
    tidur2.src = "off.gif";
  }
}

// RUANGAN TAMU (TOGGLE 9-13)
function tamu(action, lamp) {
  let toggle9 = document.getElementById("default-toggle9");
  let toggle10 = document.getElementById("default-toggle10");
  let toggle11 = document.getElementById("default-toggle11");
  let toggle12 = document.getElementById("default-toggle12");

  let tamu1 = document.getElementById("tamu1");
  let tamu2 = document.getElementById("tamu2");
  let tamu3 = document.getElementById("tamu3");
  let tamu4 = document.getElementById("tamu4");

  if (toggle9.checked) {
    tamu1.src = "on.gif";
  } else {
    tamu1.src = "off.gif";
  }

  if (toggle10.checked) {
    tamu2.src = "on.gif";
  } else {
    tamu2.src = "off.gif";
  }

  if (toggle11.checked) {
    tamu3.src = "on.gif";
  } else {
    tamu3.src = "off.gif";
  }
  if (toggle12.checked) {
    tamu4.src = "on.gif";
  } else {
    tamu4.src = "off.gif";
  }
}

function pusat3(action, lamp) {
  let pusat3 = document.getElementById("default-toggle13");

  let tamu1 = document.getElementById("tamu1");
  let tamu2 = document.getElementById("tamu2");
  let tamu3 = document.getElementById("tamu3");
  let tamu4 = document.getElementById("tamu4");

  if (pusat3.checked) {
    tamu1.src = "on.gif";
    tamu2.src = "on.gif";
    tamu3.src = "on.gif";
    tamu4.src = "on.gif";
  } else {
    tamu1.src = "off.gif";
    tamu2.src = "off.gif";
    tamu3.src = "off.gif";
    tamu4.src = "off.gif";
  }
}

//   SEPUHHHHH
function sepuh(action, lamp) {
  let sepuh = document.getElementById("default-toggle14");

  let keluarga1 = document.getElementById("keluarga1");
  let keluarga2 = document.getElementById("keluarga2");
  let keluarga3 = document.getElementById("keluarga3");

  let makan1 = document.getElementById("makan1");

  let tidur1 = document.getElementById("tidur1");
  let tidur2 = document.getElementById("tidur2");

  let tamu1 = document.getElementById("tamu1");
  let tamu2 = document.getElementById("tamu2");
  let tamu3 = document.getElementById("tamu3");
  let tamu4 = document.getElementById("tamu4");

  if (sepuh.checked) {
    keluarga1.src = "on.gif";
    keluarga2.src = "on.gif";
    keluarga3.src = "on.gif";

    makan1.src = "on.gif";

    tidur1.src = "on.gif";
    tidur2.src = "on.gif";

    tamu1.src = "on.gif";
    tamu2.src = "on.gif";
    tamu3.src = "on.gif";
    tamu4.src = "on.gif";
  } else {
    keluarga1.src = "off.gif";
    keluarga2.src = "off.gif";
    keluarga3.src = "off.gif";

    makan1.src = "off.gif";

    tidur1.src = "off.gif";
    tidur2.src = "off.gif";

    tamu1.src = "off.gif";
    tamu2.src = "off.gif";
    tamu3.src = "off.gif";
    tamu4.src = "off.gif";
  }
}
