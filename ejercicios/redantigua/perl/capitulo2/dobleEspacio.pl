#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

sub doubles {
    my $line = shift;
    $line =~ s/\s{2}/ /g;
    return $line;
}

say "Introduce una frase";
my $string = <>;
$string = doubles($string);
say $string;
