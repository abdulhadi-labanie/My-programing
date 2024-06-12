
var randomNum1, randomNum2, randomNum3;

randomNum1 = Math.floor(Math.random() * 500) + 20; 

do {
  randomNum2 = Math.floor(Math.random() * 500) + 20; 
} while (randomNum2 === randomNum1); 

do {
  randomNum3 = Math.floor(Math.random() * 500) + 20; 
} while (randomNum3 === randomNum1 || randomNum3 === randomNum2); 

function kolmeSarjaan() {
  Rsarja = randomNum1+randomNum2+randomNum3;
  return Rsarja;
}

function print_kolmeSarjaan() {
  document.getElementById("kolmeRinnan").innerHTML = "<div class= print_rinnan>" +
  "<h4>sarjakytkennässä : &#128526;</h4>" + 
  " R1 = " + randomNum1 + "Ω" + "<br>" +
  " R2 = " + randomNum2 + "Ω" + "<br>" +
  " R3 = " + randomNum3 + "Ω" + "<br>" + " Rkok = " + kolmeSarjaan(randomNum1,randomNum2,randomNum3) + "Ω" +
  "</div>";
  return document.getElementById("kolmeRinnan").innerHTML
}

 function rinnan() {
   Rsarja= 1 / ((1 / randomNum1) + (1 / randomNum2) + (1 / randomNum3));
   return Rsarja;
 }
 
function print_rinnan() {
   document.getElementById("kolmeRinnan").innerHTML = "<div class= print_rinnan>" +
   "<h4>rinnakkaiskytkennässä : &#128521;</h4>" + 
   " R1 = " + randomNum1 + "Ω" + "<br>" +
   " R2 = " + randomNum2 + "Ω" + "<br>" +
   " R3 = " + randomNum3 + "Ω" + "<br>" + " Rkok = " + rinnan(randomNum1,randomNum2,randomNum3).toFixed(2)+"Ω"
   "</div>";
   return document.getElementById("kolmeRinnan").innerHTML
}