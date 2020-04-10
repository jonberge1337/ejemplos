#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

sub count {
    my ($name) = @_;
    open( my $file, '<', $name ) || die "error: $!";
    my $cantidad = 0;
    $cantidad += $_ =~ s/(\w+)//g while <$file>;
    say "El documento tiene $cantidad de palabras";
    close($file);
}

count('texto.txt');
