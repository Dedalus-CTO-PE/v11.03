create table casstyaf
(
  casttoe     char(3) default ' ' not null,
  caststy     char(3) default ' ' not null,
  castdes     char(35) default ' ' not null,
  castlen     decimal(3,0) default 0 not null,
  castjr      char(1) default ' ' not null,
  castzf      char(1) default ' ' not null,
  castde      char(1) default ' ' not null,
  castdat     char(1) default ' ' not null,
  castspa     char(16) default ' ' not null,
  lf          char(1)
);
create unique index casstya1 on casstyaf
(
casttoe,
caststy
);
revoke all on casstyaf from public ; 
grant select on casstyaf to public ; 
