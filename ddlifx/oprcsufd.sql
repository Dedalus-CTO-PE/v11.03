create table oprcsuaf
(
opcsdate    char(6),
opcsdoct    char(6),
opcstype    char(1),
opcstime    char(3),
opcsbses    decimal(6,0),
opcsbtim    decimal(6,0),
opcsuses    decimal(6,0),
opcsutim    decimal(6,0),
opcsbrks    decimal(6,0),
opcsstim    decimal(6,0),
opcsspar    char(3),
lf          char(1)
);
create unique index oprcsua1 on oprcsuaf
(
opcsdate,
opcsdoct,
opcstype,
opcstime
);
revoke all on oprcsuaf from public ; 
grant select on oprcsuaf to public ; 
