#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

for ( 1 .. 10 ) {
    # generar numero al azar entre 1 y 6
    say int(rand(6)) + 1;
}
