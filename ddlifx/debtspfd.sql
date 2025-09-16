create table debtspaf
(
  dbtsdeb     char(8) default ' ' not null,
  dbtsdty     char(1) default ' ' not null,
  dbtsdoc     char(12) default ' ' not null,
  dbtsddat    char(8) default ' ' not null,
  dbtsspa     char(18) default ' ' not null,
  lf          char(1)
);
create unique index debtspa1 on debtspaf
(
dbtsdeb,
dbtsdty,
dbtsdoc
);
create unique index debtspa2 on debtspaf
(
dbtsdeb,
dbtsddat,
dbtsdty,
dbtsdoc
);
revoke all on debtspaf from public ; 
grant select on debtspaf to public ; 
