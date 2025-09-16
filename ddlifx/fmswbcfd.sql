create table fmswbcaf
(
  fmwbuid     char(4) default ' ' not null,
  fmwbyr      char(4) default ' ' not null,
  fmwbpr      char(2) default ' ' not null,
  fmwblin     char(3) default ' ' not null,
  fmwbcom     char(60) default ' ' not null,
  fmwbspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index fmswbca1 on fmswbcaf
(
fmwbuid,
fmwbyr,
fmwbpr,
fmwblin
);
revoke all on fmswbcaf from public ; 
grant select on fmswbcaf to public ; 
