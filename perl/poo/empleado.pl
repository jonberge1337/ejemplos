#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

use lib ".";
use Empleado;

my $e1 = new Empleado();
my $e2 = Empleado::new();
say $e1->nombre();
