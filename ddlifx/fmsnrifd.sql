create table fmsnrixx
(
  fmnirept    char(3) default ' ' not null,
  fmniacct    char(12) default ' ' not null,
  fmnitype    char(1) default ' ' not null,
  fmnipebr    decimal(17,5) default 0 not null,
  fmnipece    decimal(17,5) default 0 not null,
  fmnipe01    decimal(17,5) default 0 not null,
  fmnipe02    decimal(17,5) default 0 not null,
  fmnipe03    decimal(17,5) default 0 not null,
  fmnipe04    decimal(17,5) default 0 not null,
  fmnipe05    decimal(17,5) default 0 not null,
  fmnipe06    decimal(17,5) default 0 not null,
  fmnipe07    decimal(17,5) default 0 not null,
  fmnipe08    decimal(17,5) default 0 not null,
  fmnipe09    decimal(17,5) default 0 not null,
  fmnipe10    decimal(17,5) default 0 not null,
  fmnipe11    decimal(17,5) default 0 not null,
  fmnipe12    decimal(17,5) default 0 not null,
  fmnipe13    decimal(17,5) default 0 not null,
  fmnispar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnria1 on fmsnrixx
(
fmnirept,
fmniacct,
fmnitype
);
revoke all on fmsnrixx from public ; 
grant select on fmsnrixx to public ; 
