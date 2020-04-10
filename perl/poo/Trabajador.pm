package Trabajador;

#Heredamos de Persona
use lib ".";
use parent 'Persona';

use strict;    #Nos ponemos serios

#Añadimos un método con el salario del trabajador
sub salario {
    my $self = shift;      #El primer parámetro de un metodo es la  clase

    #Miramos si se le ha pasado algún parámetro, en cuyo caso será la edad
    $self->{SALARIO} = shift if (@_);

 #Devolvemos el nombre. Si nunca se ha modificado devolvera una cadena vacía.
    return $self->{SALARIO};
}

#Fin
1;
