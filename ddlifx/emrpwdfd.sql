create table emrpwdaf
(
  empwcntr    char(6) default ' ' not null,
  empwurgv    char(6) default ' ' not null,
  empwurgd    char(80) default ' ' not null,
  empwpwei    decimal(14,4) default 0 not null,
  empwcdat    char(8) default ' ' not null,
  empwctim    char(8) default ' ' not null,
  empwcuid    char(10) default ' ' not null,
  empwudat    char(8) default ' ' not null,
  empwutim    char(8) default ' ' not null,
  empwuuid    char(10) default ' ' not null,
  empwspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index emrpwda1 on emrpwdaf
(
empwcntr,
empwurgv
);
create unique index emrpwda2 on emrpwdaf
(
empwurgv,
empwcntr
);
revoke all on emrpwdaf from public ; 
grant select on emrpwdaf to public ; 
