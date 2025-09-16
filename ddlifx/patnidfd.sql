create table patnidaf
(
dptnihnu    char(2),
ptnilnum    char(8),
ptninmpi    char(20),
ptnispar    char(9),
lf          char(1)
);
create unique index patnida1 on patnidaf
(
dptnihnu,
ptnilnum
);
create unique index patnida2 on patnidaf
(
ptninmpi,
dptnihnu,
ptnilnum
);
revoke all on patnidaf from public ; 
grant select on patnidaf to public ; 
