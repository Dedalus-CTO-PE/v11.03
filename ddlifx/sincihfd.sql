create table sincihaf
(
siihcat     char(7),
siihwar     char(5),
siihdat     char(6),
siihuqt     decimal(14,2),
siihuam     decimal(14,2),
siihpqt     decimal(14,2),
siihpam     decimal(14,2),
siihrqt     decimal(14,2),
siihram     decimal(14,2),
siihspa     char(18),
lf          char(1)
);
create unique index sinciha1 on sincihaf
(
siihcat,
siihwar,
siihdat
);
create unique index sinciha2 on sincihaf
(
siihcat,
siihdat,
siihwar
);
revoke all on sincihaf from public ; 
grant select on sincihaf to public ; 
