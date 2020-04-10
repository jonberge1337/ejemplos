#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);
use lib ".";
use Persona;

my $p1 = Persona->new();
say $p1->nombre('petardo');
say $p1->edad();
