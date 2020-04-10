#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

say "Introduce una palabra";
chomp(my $palabra = <>);

open(my $file, '<', './diccionario.txt') || die "error: $!";
while (<$file>) {
    if (/^$palabra\s*=\s*(\w*)/) {
        say "$palabra significa => $1";
    }
}
close($file);
