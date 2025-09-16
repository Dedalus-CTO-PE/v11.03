create table emrkedaf
(
  emeditm     char(9) default ' ' not null,
  emedkwd     char(15) default ' ' not null,
  emedspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index emrkeda1 on emrkedaf
(
emeditm,
emedkwd
);
create unique index emrkeda2 on emrkedaf
(
emedkwd,
emeditm
);
revoke all on emrkedaf from public ; 
grant select on emrkedaf to public ; 
