#!/usr/bin/env perl -w

use strict;
use warnings;

my $original;
my $cambiado;
my $path = "/home/jb/Torrent/";
for(`ls /home/jb/Torrent/`){
    chomp($_);
    $original = $_;
    $cambiado = $_;
    if ($cambiado =~ m/La.Casa/i) {
        $cambiado =~ s/\_//g;
        $cambiado =~ s/(.HDTV.XviD)?.\[?www.DivxTotal.com\]?//gi;
        if (-f "$path$cambiado"){
            print "Ya existe el fichero $cambiado\n";
        } else {
            print "$original -> $cambiado\n";
            system("cp $path$original $path$cambiado");
        }
    }
}
