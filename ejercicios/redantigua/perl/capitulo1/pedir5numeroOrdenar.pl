#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

my @array;
for ( 1 .. 5 ) {
    my $ok = 0;
    while ( !$ok ) {
        say "Introduce un numero $_";
        chomp( my $num = <> );
        if ( $num =~ /^\d+(?:\.\d+)?/ ) {
            $ok = 1;
            push @array, $num;
        }
        else {
            say "No has introducido un numero correcto";
        }
    }
}
say "@array";
my @sorted = sort {
    print "a: $a ";
    print "b: $b\n";
    $a <=> $b
} @array;
say "@sorted";
