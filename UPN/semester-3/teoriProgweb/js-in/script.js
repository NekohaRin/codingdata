console.log("testing");
document.writeln("<h1> test dari js</h1>");
document.body.style.color = 'red';

//let gettingId = document.getElementById('gettingId');
//document.writeln.gettingId("testtt")

document.getElementById("gettingId").style.color = 'black';

function myBlack(element, backgroundColor) {
  element.style.backgroundColor = backgroundColor;
}
function myRed(element, backgroundColor) {
  element.style.backgroundColor = backgroundColor;
}

let x = 12;
let y = 9;
let total;
let nb = 'haus';

total = x + y;
console.log(total)

document.writeln(total);
document.writeln("<h1>bian sedang </h1>" + nb)
