create table opraudav
(
opavaudd    char(8),
opavaudt    char(8),
opavaudp    char(2),
opavaudr    char(1),
opavauds    decimal(1,0),
opavaudo    char(4),
opavcode    char(9),
opavdoct    char(6),
opavaver    decimal(4,0),
opavspar    char(11),
lf          char(1)
);
create index opraudav on opraudav
(
opavaudd,
opavaudt,
opavaudp,
opavaudr
);
revoke all on opraudav from public ; 
grant select on opraudav to public ; 
create table opraveaf
(
opavcode    char(9),
opavdoct    char(6),
opavaver    decimal(4,0),
opavspar    char(11),
lf          char(1)
);
create unique index opravea1 on opraveaf
(
opavcode,
opavdoct
);
create unique index opravea2 on opraveaf
(
opavdoct,
opavcode
);
revoke all on opraveaf from public ; 
grant select on opraveaf to public ; 
