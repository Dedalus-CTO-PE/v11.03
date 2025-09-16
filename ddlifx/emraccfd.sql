create table emraccaf
(
  emaccode    char(30) default ' ' not null,
  emacfdat    char(8) default ' ' not null,
  emactdat    char(8) default ' ' not null,
  emacclas    char(6) default ' ' not null,
  emacdesc    char(100) default ' ' not null,
  emacdmin    char(10) default ' ' not null,
  emacmaxs    decimal(9,6) default 0 not null,
  emacmxsi    char(1) default ' ' not null,
  emaccdat    char(8) default ' ' not null,
  emacctim    char(8) default ' ' not null,
  emaccuid    char(10) default ' ' not null,
  emacudat    char(8) default ' ' not null,
  emacutim    char(8) default ' ' not null,
  emacuuid    char(10) default ' ' not null,
  emacaflg    char(1) default ' ' not null,
  emacspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index emracca1 on emraccaf
(
emaccode,
emacdmin,
emacfdat
);
create unique index emracca2 on emraccaf
(
emaccode,
emacfdat,
emacdmin
);
revoke all on emraccaf from public ; 
grant select on emraccaf to public ; 
