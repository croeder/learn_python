
use strict;

sub f { 
    my $i = pop;  
    print "f:", $i," ", \$i,  "\n";
    $i=99; 
    print "f:", $i," ", \$i,  "\n";
}

sub g {
    print "g1:", @_[0], " addr:", \@_[0], "\n";
    $@[0]=99;
    print "g2:", @_[0], " addr:", \@_[0], "\n";
}

my $j=3;
print $j," ", \$j,  "\n";
f($j);
print $j, " ",  \$j, "\n";

print("===========================\n");

my $j=3;
print $j," ", \$j,  "\n";
g($j);
print $j, " ",  \$j, "\n";
