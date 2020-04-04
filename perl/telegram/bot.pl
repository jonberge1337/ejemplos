#!/usr/bin/env perl -w

use strict;
use warnings;
use HTTP::Request::Common qw(POST);
use LWP::UserAgent;
use JSON;
use lib ".";
use Auth 'TOKEN';

my $token = TOKEN;
my $req   = POST "https://api.telegram.org/bot$token/getUpdates";
my $ua    = LWP::UserAgent->new;
my $api   = $ua->request($req)->as_string;
$api =~ s/.*?{/{/s;
print $api;
print "\n\n";
my @prueba = $api =~ m/(\{"update_id.*?}})/sg ;

# while ( $api =~ m/(\{"update_id.*?}})/sg ) {
#     push @prueba, $1;
# }

# while ($api =~ m/(\{"update_id".*?text":.*?}})/sg){
#     push @prueba, $1;
# }

use Data::Dumper;
print Dumper(@prueba);
