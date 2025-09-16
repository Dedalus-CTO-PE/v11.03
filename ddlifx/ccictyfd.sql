create table ccictyaf
(
  ccctsite    char(6) default ' ' not null,
  cccttype    char(6) default ' ' not null,
  ccctdept    char(3) default ' ' not null,
  ccctspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccictya1 on ccictyaf
(
ccctsite,
cccttype
);
create unique index ccictya2 on ccictyaf
(
ccctdept,
ccctsite,
cccttype
);
revoke all on ccictyaf from public ; 
grant select on ccictyaf to public ; 
