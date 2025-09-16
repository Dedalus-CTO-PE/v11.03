create table rcpchqaf
(
chqrecpt    char(12),
chqdate     char(8),
chqcashr    char(6),
chqdraw     char(20),
chqbank     char(30),
chqbrnch    char(30),
chqnum      char(12),
dchqamnt    decimal(14,2),
chqstat1    decimal(1,0),
chqstat2    decimal(1,0),
lf          char(1)
);
create unique index rcpchqa1 on rcpchqaf
(
chqrecpt,
chqnum
);
revoke all on rcpchqaf from public ; 
grant select on rcpchqaf to public ; 
