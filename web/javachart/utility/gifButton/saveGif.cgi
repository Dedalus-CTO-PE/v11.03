#!/usr/bin/perl

$OUTFILE = $ENV{"REMOTE_HOST"};

$len = read(STDIN, $gifstuff, $ENV{CONTENT_LENGTH});

if (open(FILE,"> $OUTFILE")) {
print FILE $gifstuff;
close(FILE);
}else{
    print "Can't : write to file!\n";
    die;
}

print "Content-Type: text/html\r\n\r\n";
