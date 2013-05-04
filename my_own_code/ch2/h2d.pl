#! /usr/bin/perl -w
# Convert list of hex numbers into decimal

for (my $i = 0; $i < @ARGV; $i++) {
    $val = hex($ARGV[$i]);
	printf("0x%x = %d\n", $val, $val);
}
