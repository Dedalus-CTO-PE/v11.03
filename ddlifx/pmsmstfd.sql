create table pmsmstsf
(
msunit      char(3),
msudate     char(6),
msunprad    decimal(8,0),
msunpbad    decimal(8,0),
msutrin     decimal(8,0),
msutrout    decimal(8,0),
msudsch     decimal(8,0),
msunbday    decimal(8,0),
msubbday    decimal(8,0),
msudeath    decimal(8,0),
msubprad    decimal(8,0),
msubpbad    decimal(8,0),
msulvbd     decimal(8,0),
msuaeadm    decimal(8,0),
msuobsth    decimal(8,0),
msuoutth    decimal(8,0),
msudymth    decimal(2,0),
msunopat    decimal(8,0),
msusepbd    decimal(8,0),
dmsuabdy    char(8),
msuspare    char(25),
lf          char(1)
);
create unique index pmsmsts1 on pmsmstsf
(
msunit,
msudate
);
revoke all on pmsmstsf from public ; 
grant select on pmsmstsf to public ; 
