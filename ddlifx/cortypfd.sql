create table cortypaf
(
cotyctyp    char(5),
cotycdsc    char(35),
cotycsec    char(2),
cotycspa    char(80),
lf          char(1)
);
create unique index cortypa1 on cortypaf
(
cotyctyp
);
revoke all on cortypaf from public ; 
grant select on cortypaf to public ; 
