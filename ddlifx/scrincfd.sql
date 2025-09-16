create table scrincaf
(
  scinpid     char(8) default ' ' not null,
  scintyp     char(1) default ' ' not null,
  scininc     char(12) default ' ' not null,
  scingen     decimal(1,0) default 0 not null,
  scinspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index scrinca1 on scrincaf
(
scinpid,
scintyp,
scininc
);
revoke all on scrincaf from public ; 
grant select on scrincaf to public ; 
