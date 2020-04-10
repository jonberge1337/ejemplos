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
    $bot->getUpdates;
    $bot->eval;
    sleep 1;
}
