#!/usr/bin/env perl -w

use strict;
use warnings;
use DBI;

my $driver = "SQLite";
my $database = "test.db";
my $dsn = "dbi:$driver:dbname=$database";
my $dbh = DBI->connect($dsn,'','',{AutoCommit => 1, RaiseError => 1,
        PrintError => 0}) or die $DBI::errstr;

print "Accedido sin problemas";
