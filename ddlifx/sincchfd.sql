create table sincchaf
(
sichcst     char(5),
sichcat     char(7),
sichwar     char(5),
sichdat     char(6),
sichsub     char(5),
sichuqt     decimal(14,2),
sichuam     decimal(14,2),
sichspa     char(18),
lf          char(1)
);
create unique index sinccha1 on sincchaf
(
sichcst,
sichcat,
sichwar,
sichdat,
sichsub
);
create unique index sinccha2 on sincchaf
(
sichcst,
sichdat,
sichcat,
sichwar,
sichsub
);
create unique index sinccha3 on sincchaf
(
sichcst,
sichdat,
sichsub,
sichcat,
sichwar
);
create unique index sinccha4 on sincchaf
(
sichcat,
sichwar,
sichdat,
sichcst,
sichsub
);
create unique index sinccha5 on sincchaf
(
sichcst,
sichsub,
sichdat,
sichcat,
sichwar
);
revoke all on sincchaf from public ; 
grant select on sincchaf to public ; 
