#!/usr/bin/env perl -w

use strict;
use warnings;

my $archivo;
my $path = "/home/jb/.config/nvim/after/ftplugin/";
foreach (`ls $path`) {
    chomp($_);
    # print "cat $path$_\n"
    $archivo = `cat $path$_`;
    # print $archivo;
    $archivo =~ s/new.*term:../te /gi;
    $archivo =~ s/".*//g;
    chomp($archivo);
    print $archivo."\n";
    system("echo '$archivo' > $path$_");
}
