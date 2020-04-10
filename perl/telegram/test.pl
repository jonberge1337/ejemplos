#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

my $perl = {};
$perl->{primero} = { prueba => 1, prueba2 => 2 };
$perl->{segundo} = { prueba => 1, prueba2 => 2 };

use Data::Dumper;
print Dumper($perl);

say $perl->{primero}->{prueba2};

for ( %{$perl} ) {
    say $_;
}

my @data  = 'a' .. 'z';
my @cards = sort { ( -1, 1 )[ rand(2) ] } @data;
say "@cards";
say scalar @cards;

$a = "pattern\n";
print "ok 1\n" if $a =~ /^pattern$/;
print "ok 2\n" if $a eq 'pattern';
print "ok 3\n" if $a =~ /^pattern\z/;
