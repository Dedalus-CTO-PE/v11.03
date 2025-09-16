create table fmstyyyy
(
  fmtrbat     char(5) default ' ' not null,
  fmtruniq    char(5) default ' ' not null,
  fmtrledg    char(2) default ' ' not null,
  fmtracct    char(12) default ' ' not null,
  fmtrcred    char(5) default ' ' not null,
  fmtrpdat    char(8) default ' ' not null,
  fmtrtdat    char(8) default ' ' not null,
  fmtrtype    char(2) default ' ' not null,
  fmtrdiss    char(5) default ' ' not null,
  fmtrpper    char(2) default ' ' not null,
  fmtrdocr    char(15) default ' ' not null,
  fmtramt     decimal(14,2) default 0 not null,
  fmtrord     char(8) default ' ' not null,
  fmtrresp    char(4) default ' ' not null,
  fmtrdesc    char(30) default ' ' not null,
  fmtrspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index fmstrna1 on fmstyyyy
(
fmtrbat,
fmtruniq
);
create unique index fmstrna2 on fmstyyyy
(
fmtrledg,
fmtracct,
fmtrpdat,
fmtrbat,
fmtruniq
);
revoke all on fmstyyyy from public ; 
grant select on fmstyyyy to public ; 
