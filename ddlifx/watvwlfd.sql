create table watvwlaf
(
wtvwcons    char(6),
wtvwltyp    char(3),
wtvwdesc    char(40),
wtvwwtel    decimal(3,0),
wtvwwtdc    decimal(3,0),
wtvwstat    decimal(1,0),
wtvwtele    char(20),
wtvwspar    char(21),
lf          char(1)
);
create unique index watvwla1 on watvwlaf
(
wtvwcons,
wtvwltyp
);
create unique index watvwla2 on watvwlaf
(
wtvwltyp,
wtvwcons
);
revoke all on watvwlaf from public ; 
grant select on watvwlaf to public ; 
