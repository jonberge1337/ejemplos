#!/usr/bin/env perl -w

use strict;
use warnings;
use DBI;

my $driver = "SQLite";
my $database = "test.db";
my $direccion = "dbi:$driver:dbname=$database";
my $conexion = DBI->connect($direccion,'','',{AutoCommit => 1, RaiseError => 1,
        PrintError => 0}) or die $DBI::errstr;

print "Abierto satisfactoriamente la base de datos\n";

my $consulta = "CREATE TABLE IF NOT EXISTS PALABRAS(
PALABRA TEXT NOT NULL
)";

my $statement = $conexion->do($consulta);
print "Vamos bien\n";

$consulta = "SELECT name
FROM sqlite_master
WHERE type='table'
    AND name='PALABRAS'";
$statement = $conexion->prepare($consulta);
print "Vamos bien\n";
my $cursor = $statement->execute() or die $DBI::errstr, $!;

if ($cursor < 0) {
    print "Existe";
}
else {
    print "No existe";
}
$conexion->disconnect();
