package Employee;

use strict;
use warnings;

sub new {
    my $class = shift;
    my $self  = {
        name => shift,
        id   => shift
    };

    bless $self, $class;
    return $self;
}

1;
