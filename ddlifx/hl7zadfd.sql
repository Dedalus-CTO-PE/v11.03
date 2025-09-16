create table hl7zadaf
(
  dzadin01    char(20) default ' ' not null,
  zadin02     char(3) default ' ' not null,
  dzadin03    char(2) default ' ' not null,
  dzadin04    char(2) default ' ' not null,
  dzadin05    char(2) default ' ' not null,
  zad001      char(30) default ' ' not null,
  zad002      char(30) default ' ' not null,
  zad003      char(30) default ' ' not null,
  zad004      char(25) default ' ' not null,
  zad005      char(8) default ' ' not null,
  zad006      char(6) default ' ' not null,
  zad007      char(8) default ' ' not null,
  zad008      char(2) default ' ' not null,
  zad009      char(26) default ' ' not null,
  zad010      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7zad01 on hl7zadaf
(
dzadin01,
zadin02,
dzadin03,
dzadin04,
dzadin05
);
revoke all on hl7zadaf from public ; 
grant select on hl7zadaf to public ; 
