create table aaesawaf
(
  aeswtype    char(1) default ' ' not null,
  aeswcode    char(6) default ' ' not null,
  aeswname    char(30) default ' ' not null,
  aeswadd1    char(35) default ' ' not null,
  aeswadd2    char(35) default ' ' not null,
  aeswadd3    char(35) default ' ' not null,
  aeswadd4    char(35) default ' ' not null,
  aeswpost    char(8) default ' ' not null,
  aeswtele    char(12) default ' ' not null,
  aeswcont    char(30) default ' ' not null,
  aeswspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index aaesawa1 on aaesawaf
(
aeswtype,
aeswcode
);
create unique index aaesawa2 on aaesawaf
(
aeswtype,
aeswname,
aeswcode
);
revoke all on aaesawaf from public ; 
grant select on aaesawaf to public ; 
