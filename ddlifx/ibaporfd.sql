create table ibaportf
(
  ibapport    char(2) default ' ' not null,
  ibapprog    char(8) default ' ' not null,
  ibapuser    char(4) default ' ' not null,
  ibapdate    char(8) default ' ' not null,
  ibaptime    char(8) default ' ' not null,
  ibapdesc    char(30) default ' ' not null,
  ibapidnt    char(3) default ' ' not null,
  ibapspar    char(38) default ' ' not null,
  lf          char(1)
);
create unique index ibaport1 on ibaportf
(
ibapport
);
revoke all on ibaportf from public ; 
grant select on ibaportf to public ; 
