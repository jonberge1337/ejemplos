var lista = [];
for (var i = 1; i <= 100; i++) {
  lista.push(i);
}
var num;
var playing;
var cronometro;
var fallos;
function calc(id) {
  if (playing) {
    label = document.getElementById(id);
    if (num == label.textContent) {
      label.style.backgroundColor = "#00ff4c";
      num++;
    } else {
      label.style.backgroundColor = "#ff0000";
      fallos++;
      if (fallos == 3) {
        clearInterval(cronometro);
        playing = 0;
        alert("Has gastado todos los intentos");
        document.getElementById("start").disabled = false;
      }
    }
    if (num == 101) {
      alert("Felicidades has acertado todas");
    }
  } else {
    alert("Tienes que darle a start para empezar a jugar");
  }
}
function crono() {
  playing = 1;
  num = 1;
  fallos = 0;

  var celdas = document.getElementsByClassName("celda");
  for (var i = 0, len = celdas.length; i < len; i++) {
    celdas[i].style.backgroundColor = "white";
  }
  var sec = 0;
  var min = 0;
  var m = document.getElementById("min");
  var s = document.getElementById("sec");
  document.getElementById("start").disabled = true;
  cronometro = setInterval(function () {
    sec++;
    if (sec == 60) {
      min++;
      sec = 0;
    }
    m.textContent = min;
    s.textContent = sec < 10 ? "0" + sec : sec;
    if (min == 5) {
      clearInterval(cronometro);
      document.getElementById("start").disabled = false;
      playing = 0;
      alert(
        "Se te ha terminado el tiempo",
        "si quieres volver a jugar dale a start"
      );
    }
  }, 1000);
}

function genera_tabla() {
  lista.sort(() => Math.random() - 0.5);
  // Obtener la referencia del id tabla
  var div = document.getElementById("tabla");

  // Crea un elemento <table> y un elemento <tdiv>
  var tabla = document.createElement("table");
  var tbldiv = document.createElement("tbody");

  var n = 0;
  // Crea las celdas
  for (var i = 0; i < 10; i++) {
    // Crea las hileras de la tabla
    var hilera = document.createElement("tr");

    for (var j = 0; j < 10; j++) {
      // Crea un elemento <td> y un nodo de texto, haz que el nodo de
      // texto sea el contenido de <td>, ubica el elemento <td> al final
      // de la hilera de la tabla
      var celda = document.createElement("td");
      var textoCelda = document.createTextNode(lista[n]);
      celda.appendChild(textoCelda);
      hilera.appendChild(celda);
      celda.setAttribute("onclick", "calc(this.id)");
      celda.setAttribute("class", "celda");
      celda.setAttribute("id", "td" + n);
      celda.setAttribute("align", "center");
      n++;
    }

    // agrega la hilera al final de la tabla (al final del elemento tbldiv)
    tbldiv.appendChild(hilera);
  }

  // posiciona el <tdiv> debajo del elemento <table>
  tabla.appendChild(tbldiv);
  // appends <table> into <div>
  div.appendChild(tabla);
  // modifica el atributo "border" de la tabla y lo fija a "2";
  tabla.setAttribute("border", "2");
}
