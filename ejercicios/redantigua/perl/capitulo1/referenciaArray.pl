#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

my $ref;
foreach my $i ( 0 .. 2 ) {
    foreach my $j ( 0 .. 2 ) {
        say "Introduce un numero [$i][$j]";
        $ref->[$i][$j]=<>;
    }
}

say $ref->[1][2];
