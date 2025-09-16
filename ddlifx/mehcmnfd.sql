create table mehcmnaf
(
  mhcmurno    char(8) default ' ' not null,
  mhcmuniq    char(8) default ' ' not null,
  mhcmsdat    char(8) default ' ' not null,
  mhcmstim    char(8) default ' ' not null,
  mhcmctyp    char(3) default ' ' not null,
  mhcmline    char(3) default ' ' not null,
  mhcmdata    char(100) default ' ' not null,
  mhcmcdat    char(8) default ' ' not null,
  mhcmctim    char(8) default ' ' not null,
  mhcmcuid    char(10) default ' ' not null,
  mhcmudat    char(8) default ' ' not null,
  mhcmutim    char(8) default ' ' not null,
  mhcmuuid    char(10) default ' ' not null,
  mhcmspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index mehcmna1 on mehcmnaf
(
mhcmurno,
mhcmuniq,
mhcmsdat,
mhcmstim,
mhcmctyp,
mhcmline
);
revoke all on mehcmnaf from public ; 
grant select on mehcmnaf to public ; 
