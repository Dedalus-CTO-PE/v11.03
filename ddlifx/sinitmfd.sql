create table sinitmaf
(
siitwar     char(5),
siitcat     char(7),
siitdat     char(8),
siittim     char(8),
siitopr     char(4),
siitpor     char(2),
siitprg     char(8),
siitper     char(6),
siitqty     decimal(14,2),
siitamt     decimal(14,2),
siittyp     decimal(2,0),
siitcst     char(5),
siitreq     char(8),
siitpur     char(7),
siitref     char(20),
siitsoh     char(15),
siitspa     char(3),
lf          char(1)
);
create unique index sinitma1 on sinitmaf
(
siitwar,
siitcat,
siitdat,
siittim
);
create unique index sinitma2 on sinitmaf
(
siitcat,
siitdat,
siitwar,
siittim
);
revoke all on sinitmaf from public ; 
grant select on sinitmaf to public ; 
