#!/usr/bin/env perl -w

use strict;
use warnings;

my $path = "/home/jb/Torrent/";
my $archivo;
foreach my $x (`ls $path`) {
    $archivo = $x;
    chomp($x);
    if ($archivo =~ m/^TheGoodDoctor/) {
        $archivo =~ s/^TheGoodDoctor_2/The-Good-Doctor-2x/gi;
        $archivo =~ s/_www\.divxtotal3\.net//gi;
        chomp($archivo);
        print "cp $path$x $path$archivo\n";
        system("cp $path$x $path$archivo");
    } elsif ($archivo =~ m/^The G/){
        $archivo =~ s/\s//g;
        $archivo =~ s/-//g;
        $archivo =~ s/Temporada2\[HDTV\]\[Cap.2/-2x/gi;
        $archivo =~ s/^TheGoodDoctor/The-Good-Doctor/gi;
        $archivo =~ s/\](\[www.divxtotal3.net\])?//gi;
        $x =~ s/\s/\\ /g;
        print "cp $path$x $path$archivo\n";
        system("cp $path$x $path$archivo");
    }
}
