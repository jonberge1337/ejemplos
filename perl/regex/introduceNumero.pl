#!/usr/bin/env perl -w

use strict;
use warnings;

my $numero;
my $correcto = 1;
while ($correcto) {
    print "Introduce un numero ";
    $numero = <>;
    $correcto = $numero !~ m/^\d+.?\d*$/;
}
