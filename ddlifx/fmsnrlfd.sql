create table fmsnrlaf
(
  fmnlcod     char(3) default ' ' not null,
  fmnltyp     char(1) default ' ' not null,
  fmnlunq     char(3) default ' ' not null,
  fmnllin     char(70) default ' ' not null,
  fmnlspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrla1 on fmsnrlaf
(
fmnlcod,
fmnltyp,
fmnlunq
);
revoke all on fmsnrlaf from public ; 
grant select on fmsnrlaf to public ; 
