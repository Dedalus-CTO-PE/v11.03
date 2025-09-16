create table pmsaujaf
(
  pmauadat    char(8) default ' ' not null,
  pmauatim    char(8) default ' ' not null,
  pmauatyp    char(1) default ' ' not null,
  pmaucntr    char(6) default ' ' not null,
  pmauadjt    char(3) default ' ' not null,
  pmaupval    decimal(14,4) default 0 not null,
  pmaucval    decimal(14,4) default 0 not null,
  pmaucuid    char(10) default ' ' not null,
  pmaucdat    char(8) default ' ' not null,
  pmauctim    char(8) default ' ' not null,
  pmauspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsauja1 on pmsaujaf
(
pmauadat,
pmauatim,
pmauatyp,
pmaucntr,
pmauadjt
);
create unique index pmsauja2 on pmsaujaf
(
pmaucntr,
pmauadjt,
pmauadat,
pmauatim,
pmauatyp
);
revoke all on pmsaujaf from public ; 
grant select on pmsaujaf to public ; 
