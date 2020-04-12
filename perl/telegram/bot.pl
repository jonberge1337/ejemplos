#!/usr/bin/env perl -w

use strict;
use warnings;
use feature qw(say);
use lib ".";
use Auth 'TOKEN';
use Bot;

my $token = TOKEN;

my $bot = Bot->new($token);

# Bot->_getPost( $token, 'getUpdates' );
# Bot->_getPost( $token, 'sendMessage',
#     [ chat_id => -468308714, text => 'prueba' ] );
for ( 0 .. 100 ) {
    my $api = $bot->getUpdates;
    use Data::Dumper;
    print Dumper($api);
    for ( keys %{$api} ) {
        if ( !$api->{$_}->{do} ) {

        }
    }

    # $bot->eval;
    sleep 1;
}

sub eval {
    my $texto = shift;
    if ( $texto =~ /^\/himno$/ ) {

    }
    elsif ( $texto =~ /^\/saluda$/ ) {

    }
    elsif ( $texto =~ /^\/foto$/ ) {

    }
    elsif ( $texto =~ /tontito/ ) {

    }
}
