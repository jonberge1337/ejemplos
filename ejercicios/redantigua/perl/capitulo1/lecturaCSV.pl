#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

open( my $file, '<', 'capitulo1ejercicio4.csv' ) || die "error: $!";
while (<$file>) {
    chomp($_);
    if (/^.*?,.*?,(\d+)/ && $1 > 10) {
        say "La tercera columna de la linea $! es mayor que 10";
        say $_;
        say $1."\n";
    }
}
close($file);
