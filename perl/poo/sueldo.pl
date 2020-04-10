#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);
use lib ".";
use Sueldo;

my $sueldo = Sueldo::new;
say $sueldo->nombre('Jon');
say $sueldo->apellido('prueba');
say $sueldo->domicilio('calle 13');
say $sueldo->email('dsa@ads.com');
say $sueldo->telefono('943-34-21-13');
