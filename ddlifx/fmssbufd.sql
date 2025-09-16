create table fmsaudst
(
  fmstaudd    char(8) default ' ' not null,
  fmstaudt    char(8) default ' ' not null,
  fmstaudp    char(2) default ' ' not null,
  fmstaudr    char(1) default ' ' not null,
  fmstauds    decimal(1,0) default 0 not null,
  fmstaudo    char(4) default ' ' not null,
  fmstculd    char(2) default ' ' not null,
  fmstcuac    char(12) default ' ' not null,
  fmstcupr    char(3) default ' ' not null,
  fmstca01    decimal(17,5) default 0 not null,
  fmstca02    decimal(17,5) default 0 not null,
  fmstca03    decimal(17,5) default 0 not null,
  fmstca04    decimal(17,5) default 0 not null,
  fmstca05    decimal(17,5) default 0 not null,
  fmstca06    decimal(17,5) default 0 not null,
  fmstca07    decimal(17,5) default 0 not null,
  fmstca08    decimal(17,5) default 0 not null,
  fmstca09    decimal(17,5) default 0 not null,
  fmstca10    decimal(17,5) default 0 not null,
  fmstca11    decimal(17,5) default 0 not null,
  fmstca12    decimal(17,5) default 0 not null,
  fmstca13    decimal(17,5) default 0 not null,
  fmstcusp    char(20) default ' ' not null,
  lf          char(1)
);
create index fmsaudst on fmsaudst
(
fmstaudd,
fmstaudt,
fmstaudp,
fmstaudr
);
revoke all on fmsaudst from public ; 
grant select on fmsaudst to public ; 
create table fmscxxxx
(
  fmstculd    char(2) default ' ' not null,
  fmstcuac    char(12) default ' ' not null,
  fmstcupr    char(3) default ' ' not null,
  fmstca01    decimal(17,5) default 0 not null,
  fmstca02    decimal(17,5) default 0 not null,
  fmstca03    decimal(17,5) default 0 not null,
  fmstca04    decimal(17,5) default 0 not null,
  fmstca05    decimal(17,5) default 0 not null,
  fmstca06    decimal(17,5) default 0 not null,
  fmstca07    decimal(17,5) default 0 not null,
  fmstca08    decimal(17,5) default 0 not null,
  fmstca09    decimal(17,5) default 0 not null,
  fmstca10    decimal(17,5) default 0 not null,
  fmstca11    decimal(17,5) default 0 not null,
  fmstca12    decimal(17,5) default 0 not null,
  fmstca13    decimal(17,5) default 0 not null,
  fmstcusp    char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmssbua1 on fmscxxxx
(
fmstculd,
fmstcuac
);
create unique index fmssbua2 on fmscxxxx
(
fmstcupr,
fmstculd,
fmstcuac
);
revoke all on fmscxxxx from public ; 
grant select on fmscxxxx to public ; 
