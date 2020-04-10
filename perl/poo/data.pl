#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);
use lib ".";
use Department;

my $a = Department->new("Petardo", 123);
say $a->{name};
say $a->{id};
