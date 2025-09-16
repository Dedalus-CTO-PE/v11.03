create table fmsjdtaf
(
  fmjdjty     char(1) default ' ' not null,
  fmjdjid     char(6) default ' ' not null,
  fmjdlno     char(3) default ' ' not null,
  fmjddrcr    char(1) default ' ' not null,
  fmjddesc    char(35) default ' ' not null,
  fmjdacc     char(12) default ' ' not null,
  fmjddis     char(5) default ' ' not null,
  fmjdres     char(4) default ' ' not null,
  fmjdtamt    decimal(14,2) default 0 not null,
  fmjdperc    decimal(6,2) default 0 not null,
  fmjdpamt    decimal(14,2) default 0 not null,
  fmjdbasc    char(3) default ' ' not null,
  fmjdspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index fmsjdta1 on fmsjdtaf
(
fmjdjty,
fmjdjid,
fmjdlno
);
revoke all on fmsjdtaf from public ; 
grant select on fmsjdtaf to public ; 
