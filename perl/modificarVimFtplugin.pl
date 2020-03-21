#!/usr/bin/env perl -w

use strict;
use warnings;

my $archivo;
my $path = "/home/jb/.vim/after/ftplugin/";
foreach (`ls $path`) {
    chomp($_);
    # print "cat $path$_\n"
    $archivo = `cat $path$_`;
    print $archivo;
    $archivo =~ s/\\//g;
    $archivo =~ s/set(local)? makeprg\s?=\s?/nnoremap <buffer> <F5> :w<CR>!/gi;
    chomp($archivo);
    print $archivo."<CR>\n";
    system("echo '$archivo<CR>' > $path$_");
}
