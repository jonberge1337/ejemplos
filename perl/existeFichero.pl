#!/usr/bin/env perl -w

use strict;
use warnings;

my $fichero = "descuento.mp4";
my $directorio = "/home/jb/Descargas";

if (-f "$directorio/$fichero") {
    print "El archivo $fichero esta en $directorio\n";
}
else {
    print "El archivo $fichero no esta en $directorio\n";
}
