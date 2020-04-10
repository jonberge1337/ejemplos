#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

open( my $file, '>', 'keyValue.txt' );
say $file "key1=value1";
say $file "key2=value2";
say $file "key3=value3";
close($file);

my @array;
open( $file, '<', 'keyValue.txt' );
while (<$file>) {
    my %temp = split(/=/);
    push @array, \%temp;
}
close($file);

use Data::Dumper;
print Dumper(@array);

foreach my $key (@array) {
    # say $key;
    # say %$key;
    # my ($clave, $valor) = %$key;
    # chomp($valor);
    # say "$clave => $valor";
    foreach my $cl (keys %$key) {
        say "$cl => ".%$key{$cl};
    }

}
