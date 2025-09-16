create table pmstemaf
(
  pmtmteam    char(5) default ' ' not null,
  pmtmdesc    char(30) default ' ' not null,
  pmtmactv    char(1) default ' ' not null,
  pmtmcuid    char(10) default ' ' not null,
  pmtmcdat    char(8) default ' ' not null,
  pmtmctim    char(8) default ' ' not null,
  pmtmuuid    char(10) default ' ' not null,
  pmtmudat    char(8) default ' ' not null,
  pmtmutim    char(8) default ' ' not null,
  pmtmspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmstema1 on pmstemaf
(
pmtmteam
);
revoke all on pmstemaf from public ; 
grant select on pmstemaf to public ; 
