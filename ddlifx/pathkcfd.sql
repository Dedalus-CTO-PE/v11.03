create table pathkcaf
(
  pthkclam    char(3) default ' ' not null,
  pthkdept    char(3) default ' ' not null,
  pthkdiet    char(3) default ' ' not null,
  pthkbtyp    char(3) default ' ' not null,
  dpthkage    char(3) default ' ' not null,
  pthkcchg    decimal(14,2) default 0 not null,
  pthkdesc    char(30) default ' ' not null,
  pthkspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index pathkca1 on pathkcaf
(
pthkclam,
pthkdept,
pthkdiet,
pthkbtyp,
dpthkage
);
revoke all on pathkcaf from public ; 
grant select on pathkcaf to public ; 
