create table priwcomf
(
prwcinvn    char(8),
dprwcunq    char(8),
prwcname    char(30),
prwcadd1    char(25),
prwcadd2    char(25),
prwcadd3    char(25),
prwcpost    char(4),
prwctele    char(12),
prwcaccp    decimal(1,0),
prwcicod    char(6),
prwcclmn    char(20),
prwctime    char(5),
prwccom1    char(40),
prwccom2    char(40),
prwcspar    char(5),
lf          char(1)
);
create unique index priwcom1 on priwcomf
(
prwcinvn,
dprwcunq
);
create unique index priwcom2 on priwcomf
(
dprwcunq,
prwcinvn
);
revoke all on priwcomf from public ; 
grant select on priwcomf to public ; 
