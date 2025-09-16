create table mehaudax
(
  mhaxaudd    char(8) default ' ' not null,
  mhaxaudt    char(8) default ' ' not null,
  mhaxaudp    char(2) default ' ' not null,
  mhaxaudr    char(1) default ' ' not null,
  mhaxauds    decimal(1,0) default 0 not null,
  mhaxaudo    char(4) default ' ' not null,
  dmhaxtyp    char(1) default ' ' not null,
  mhaxcode    char(9) default ' ' not null,
  mhaxdesc    char(70) default ' ' not null,
  mhaxstat    char(1) default ' ' not null,
  mhaxspar    char(9) default ' ' not null,
  lf          char(1)
);
create index mehaudax on mehaudax
(
mhaxaudd,
mhaxaudt,
mhaxaudp,
mhaxaudr
);
revoke all on mehaudax from public ; 
grant select on mehaudax to public ; 
create table mehaxiaf
(
  dmhaxtyp    char(1) default ' ' not null,
  mhaxcode    char(9) default ' ' not null,
  mhaxdesc    char(70) default ' ' not null,
  mhaxstat    char(1) default ' ' not null,
  mhaxspar    char(9) default ' ' not null,
  lf          char(1)
);
create unique index mehaxia1 on mehaxiaf
(
dmhaxtyp,
mhaxcode
);
revoke all on mehaxiaf from public ; 
grant select on mehaxiaf to public ; 
