create table fmsryyyy
(
  fmctbat     char(5) default ' ' not null,
  fmctuniq    char(5) default ' ' not null,
  fmctledg    char(2) default ' ' not null,
  fmctacct    char(12) default ' ' not null,
  fmctcred    char(5) default ' ' not null,
  fmctpdat    char(8) default ' ' not null,
  fmcttdat    char(8) default ' ' not null,
  fmcttype    char(2) default ' ' not null,
  fmctdiss    char(5) default ' ' not null,
  fmctpper    char(2) default ' ' not null,
  fmctdocr    char(15) default ' ' not null,
  fmctamt     decimal(14,2) default 0 not null,
  fmctord     char(8) default ' ' not null,
  fmctresp    char(4) default ' ' not null,
  fmctdesc    char(30) default ' ' not null,
  fmctspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index fmsctra1 on fmsryyyy
(
fmctbat,
fmctuniq
);
create unique index fmsctra2 on fmsryyyy
(
fmctledg,
fmctacct,
fmctpdat,
fmctbat,
fmctuniq
);
revoke all on fmsryyyy from public ; 
grant select on fmsryyyy to public ; 
