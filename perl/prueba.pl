#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

my $id = fork;
if ( !$id ) {
    for ( 1 .. 10 ) {
        say;

        # sleep 1;
    }
    say "Proceso hijo terminado";

    # exit;
}

foreach my $i ( 1 .. 20 ) {
    say $i;

    # sleep 1;
}

my $f = do { local $/ = undef; open my $fh, '<', './goodDoctor.pl'; <$fh> };
say $f;
