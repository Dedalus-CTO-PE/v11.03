create table emrproaf
(
  emprcode    char(9) default ' ' not null,
  emprdesc    char(70) default ' ' not null,
  emprhdpe    char(6) default ' ' not null,
  emprspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index emrproa1 on emrproaf
(
emprcode
);
create unique index emrproa2 on emrproaf
(
emprdesc,
emprcode
);
revoke all on emrproaf from public ; 
grant select on emrproaf to public ; 
