create table allikaaf
(
  alikdept    char(3) default ' ' not null,
  alikcode    char(9) default ' ' not null,
  alikkwrd    char(50) default ' ' not null,
  alikspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allikaa1 on allikaaf
(
alikdept,
alikcode,
alikkwrd
);
create unique index allikaa2 on allikaaf
(
alikdept,
alikkwrd,
alikcode
);
revoke all on allikaaf from public ; 
grant select on allikaaf to public ; 
