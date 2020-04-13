var lista = [];
for (var i = 1; i <= 100; i++) {
  lista.push(i);
}
var num = 1;
function calc(id) {
  label = document.getElementById(id);
  if (num == label.textContent) {
    label.style.backgroundColor = "#00ff4c";
    num++;
  } else {
    label.style.backgroundColor = "#ff0000";
  }
}

function genera_tabla() {
  lista.sort(() => Math.random() - 0.5);
  // Obtener la referencia del elemento body
  var body = document.getElementsByTagName("body")[0];

  // Crea un elemento <table> y un elemento <tbody>
  var tabla = document.createElement("table");
  var tblBody = document.createElement("tbody");

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
      celda.setAttribute("id", "td" + n);
      celda.setAttribute("align", "center");
      n++;
    }

    // agrega la hilera al final de la tabla (al final del elemento tblbody)
    tblBody.appendChild(hilera);
  }

  // posiciona el <tbody> debajo del elemento <table>
  tabla.appendChild(tblBody);
  // appends <table> into <body>
  body.appendChild(tabla);
  // modifica el atributo "border" de la tabla y lo fija a "2";
  tabla.setAttribute("border", "2");
}
