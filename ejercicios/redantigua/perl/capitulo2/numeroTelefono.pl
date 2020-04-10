#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

sub telefono {
    $_[0] = shift;
    my $r  = qr/[0-9]{2,3}/;
    my $t  = qr/\d{3}(\s|-)?\d{2}(\s|-)?\d{2}(\s|-)?\d{2}/;
    my $ok = 0;
    if ( $_[0] =~ /(00$r|\+$r)?(?:\s|-)?$t/ ) {
        $ok = 1;
    }
    return $ok;
}

say "Introduce un telefono";
my $numero = <>;
if ( telefono($numero) ) {
    say "Correcto";
}
else {
    say "No correcto";
}
