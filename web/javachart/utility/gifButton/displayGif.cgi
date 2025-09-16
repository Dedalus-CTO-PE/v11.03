#!/usr/bin/perl
############################################################
# Perl script for reflecting GIF files back to browsers
############################################################

$INFILE = $ENV{"REMOTE_HOST"};
print "Content-type: image/gif\n\n";

if (open(FILE,"< $INFILE")) {

while (<FILE>) {
	print;
}
close(FILE);
unlink($INFILE);
}else{
    print "Can't : read gif file!\n";
    die;
}
