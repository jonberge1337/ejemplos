#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);

sub ip {
    $_[0] = shift;
    my $ip = qr/[0-9]{2}|1[0-9]{2}|2[0-4][0-9]|25[0-5]/;
    return $_[0] =~ /^$ip\.$ip\.$ip\.$ip$/ ? 1 : 0;
}

say "Introduce una ip valida";
chomp(my $ip = <>);
if (ip($ip)){
    say "$ip es correcto";
} else {
    say "$ip no es correcto";
}
