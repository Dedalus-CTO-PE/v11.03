create table debfdtaf
(
  dbfddeb     char(8) default ' ' not null,
  dbfddty     char(1) default ' ' not null,
  dbfddoc     char(12) default ' ' not null,
  dbfddln     char(3) default ' ' not null,
  dbfdinv     char(12) default ' ' not null,
  dbfdiln     char(3) default ' ' not null,
  dbfdidat    char(8) default ' ' not null,
  dbfdpdat    char(8) default ' ' not null,
  dbfdgls     char(1) default ' ' not null,
  dbfdled     char(2) default ' ' not null,
  dbfdiac     char(12) default ' ' not null,
  dbfdcac     char(12) default ' ' not null,
  dbfdtac     char(12) default ' ' not null,
  dbfdtca     char(12) default ' ' not null,
  dbfdbchg    char(6) default ' ' not null,
  dbfdbdat    char(8) default ' ' not null,
  dbfdbtim    char(6) default ' ' not null,
  dbfdbusr    char(4) default ' ' not null,
  dbfditm     char(8) default ' ' not null,
  dbfdsdat    char(8) default ' ' not null,
  dbfddref    char(50) default ' ' not null,
  dbfdoref    char(50) default ' ' not null,
  dbfdqty     decimal(10,2) default 0 not null,
  dbfdpri     decimal(16,4) default 0 not null,
  dbfdtot     decimal(14,2) default 0 not null,
  dbfdtrt     decimal(6,2) default 0 not null,
  dbfdtax     decimal(14,2) default 0 not null,
  dbfdpaid    decimal(14,2) default 0 not null,
  dbfdur1     char(25) default ' ' not null,
  dbfdur2     char(25) default ' ' not null,
  dbfdud1     char(8) default ' ' not null,
  dbfdud2     char(8) default ' ' not null,
  dbfduy1     char(1) default ' ' not null,
  dbfduy2     char(1) default ' ' not null,
  dbfduc1     char(3) default ' ' not null,
  dbfduc2     char(3) default ' ' not null,
  dbfduc3     char(3) default ' ' not null,
  dbfduc4     char(3) default ' ' not null,
  dbfdgst     char(6) default ' ' not null,
  dbfdspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index debfdta1 on debfdtaf
(
dbfddeb,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta2 on debfdtaf
(
dbfddeb,
dbfdpdat,
dbfdidat,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta3 on debfdtaf
(
dbfddeb,
dbfdidat,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta4 on debfdtaf
(
dbfditm,
dbfdsdat,
dbfddeb,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta5 on debfdtaf
(
dbfdgls,
dbfddeb,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta6 on debfdtaf
(
dbfddeb,
dbfdinv,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta7 on debfdtaf
(
dbfddeb,
dbfdinv,
dbfdiln,
dbfddty,
dbfddoc,
dbfddln
);
create unique index debfdta8 on debfdtaf
(
dbfdinv,
dbfddty,
dbfddoc,
dbfddln,
dbfddeb
);
revoke all on debfdtaf from public ; 
grant select on debfdtaf to public ; 
