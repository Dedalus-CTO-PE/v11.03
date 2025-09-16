create table oproruaf
(
opoudate    char(6),
opouroom    char(6),
opoubcas    decimal(6,0),
opoubopr    decimal(6,0),
opoubtim    decimal(7,0),
opoutcas    decimal(6,0),
opoutopr    decimal(6,0),
opouttim    decimal(7,0),
opouecas    decimal(6,0),
opoueopr    decimal(6,0),
opouetim    decimal(7,0),
opouaval    decimal(7,0),
opouspar    char(23),
lf          char(1)
);
create unique index oprorua1 on oproruaf
(
opoudate,
opouroom
);
revoke all on oproruaf from public ; 
grant select on oproruaf to public ; 
