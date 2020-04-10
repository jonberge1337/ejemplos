#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);
use lib ".";
use Trabajador;

my $trabajador = Trabajador::new();
say $trabajador->nombre('petardo');
