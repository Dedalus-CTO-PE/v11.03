create table pataudva
(
  ptvaaudd    char(8) default ' ' not null,
  ptvaaudt    char(8) default ' ' not null,
  ptvaaudp    char(2) default ' ' not null,
  ptvaaudr    char(1) default ' ' not null,
  ptvaauds    decimal(1,0) default 0 not null,
  ptvaaudo    char(4) default ' ' not null,
  ptvacode    char(5) default ' ' not null,
  ptvadesc    char(30) default ' ' not null,
  ptvanhsc    char(4) default ' ' not null,
  ptvaactv    char(1) default ' ' not null,
  ptvasdat    char(8) default ' ' not null,
  ptvasupd    char(1) default ' ' not null,
  ptvaedat    char(8) default ' ' not null,
  ptvaeupd    char(1) default ' ' not null,
  ptvacdat    char(8) default ' ' not null,
  ptvactim    char(8) default ' ' not null,
  ptvacuid    char(10) default ' ' not null,
  ptvaudat    char(8) default ' ' not null,
  ptvautim    char(8) default ' ' not null,
  ptvauuid    char(10) default ' ' not null,
  ptvaprov    char(8) default ' ' not null,
  ptvapnam    char(30) default ' ' not null,
  ptvappcd    char(8) default ' ' not null,
  ptvadtyp    char(1) default ' ' not null,
  ptvacnme    char(4) default ' ' not null,
  ptvaestb    char(10) default ' ' not null,
  ptvaspar    char(11) default ' ' not null,
  lf          char(1)
);
create index pataudva on pataudva
(
ptvaaudd,
ptvaaudt,
ptvaaudp,
ptvaaudr
);
revoke all on pataudva from public ; 
grant select on pataudva to public ; 
create table patvadaf
(
  ptvacode    char(5) default ' ' not null,
  ptvadesc    char(30) default ' ' not null,
  ptvanhsc    char(4) default ' ' not null,
  ptvaactv    char(1) default ' ' not null,
  ptvasdat    char(8) default ' ' not null,
  ptvasupd    char(1) default ' ' not null,
  ptvaedat    char(8) default ' ' not null,
  ptvaeupd    char(1) default ' ' not null,
  ptvacdat    char(8) default ' ' not null,
  ptvactim    char(8) default ' ' not null,
  ptvacuid    char(10) default ' ' not null,
  ptvaudat    char(8) default ' ' not null,
  ptvautim    char(8) default ' ' not null,
  ptvauuid    char(10) default ' ' not null,
  ptvaprov    char(8) default ' ' not null,
  ptvapnam    char(30) default ' ' not null,
  ptvappcd    char(8) default ' ' not null,
  ptvadtyp    char(1) default ' ' not null,
  ptvacnme    char(4) default ' ' not null,
  ptvaestb    char(10) default ' ' not null,
  ptvaspar    char(11) default ' ' not null,
  lf          char(1)
);
create unique index patvada1 on patvadaf
(
ptvacode
);
create unique index patvada2 on patvadaf
(
ptvadesc,
ptvacode
);
create unique index patvada3 on patvadaf
(
ptvanhsc,
ptvacode
);
revoke all on patvadaf from public ; 
grant select on patvadaf to public ; 
