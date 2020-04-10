package Sueldo;

use strict;
use lib ".";
use Empleado;

our @ISA = qw(Empleado);

sub new {
    my $sueldo = shift;
    my $self = new Empleado;
    $self->{dias_trabajados} = 0;
    $self->{sueldo_diario} = 0;

    bless $self, $sueldo;

    return $self;
}

sub sueldo {
    my $self = shift;
    return $self->{dias_trabajados} * $self->{sueldo_diario};
}

