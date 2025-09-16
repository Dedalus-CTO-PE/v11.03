create table mamtestf
(
mmurno      char(8),
dmmidno     char(8),
dmmtcnt     char(2),
mmdate      char(8),
mmintr      char(3),
mmintl      char(3),
mmfollow    decimal(3,0),
mmuser1     char(3),
mmuser2     char(3),
mmuser3     char(3),
mmuser4     char(3),
mmuser5     char(3),
mmuser6     char(3),
mmuser7     char(3),
mmuser8     char(3),
mmfiller    char(10),
lf          char(1)
);
create unique index mamtest1 on mamtestf
(
mmurno,
dmmidno,
dmmtcnt
);
create unique index mamtest2 on mamtestf
(
mmdate,
mmurno,
dmmidno,
dmmtcnt
);
revoke all on mamtestf from public ; 
grant select on mamtestf to public ; 
