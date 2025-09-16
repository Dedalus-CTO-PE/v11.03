create table pmssedaf
(
pmsearid    char(20),
pmserptc    char(3),
pmsescod    char(11),
pmsesrvc    char(3),
pmsesfec    char(4),
pmsesexc    char(3),
pmsesfet    char(80),
pmsespar    char(30),
lf          char(1)
);
create unique index pmsseda1 on pmssedaf
(
pmsearid,
pmserptc,
pmsescod,
pmsesrvc,
pmsesfec,
pmsesexc
);
revoke all on pmssedaf from public ; 
grant select on pmssedaf to public ; 
