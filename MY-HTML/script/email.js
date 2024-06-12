
function omaTeht_1() {
 var popup = document.getElementById("omaTeht_teksti_1");
 popup.classList.toggle("show");
}

 function tarkistaEmail() {
   var x = document.forms["omaEmail"]["email"].value;
   if (x == "") {
     omaTeht_1();
     return false;
   }
 }


