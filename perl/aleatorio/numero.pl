#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

foreach my $i (0..9) {
    say rand(10);
    say int rand 10;
    # returns a random integer between 0 and 9, inclusive.
}

