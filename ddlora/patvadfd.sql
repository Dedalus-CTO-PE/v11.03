create table pataudva
(
  ptvaaudd    varchar2(8) default ' ' not null,
  ptvaaudt    varchar2(8) default ' ' not null,
  ptvaaudp    varchar2(2) default ' ' not null,
  ptvaaudr    varchar2(1) default ' ' not null,
  ptvaauds    number(1,0) default 0 not null,
  ptvaaudo    varchar2(4) default ' ' not null,
  ptvacode    varchar2(5) default ' ' not null,
  ptvadesc    varchar2(30) default ' ' not null,
  ptvanhsc    varchar2(4) default ' ' not null,
  ptvaactv    varchar2(1) default ' ' not null,
  ptvasdat    varchar2(8) default ' ' not null,
  ptvasupd    varchar2(1) default ' ' not null,
  ptvaedat    varchar2(8) default ' ' not null,
  ptvaeupd    varchar2(1) default ' ' not null,
  ptvacdat    varchar2(8) default ' ' not null,
  ptvactim    varchar2(8) default ' ' not null,
  ptvacuid    varchar2(10) default ' ' not null,
  ptvaudat    varchar2(8) default ' ' not null,
  ptvautim    varchar2(8) default ' ' not null,
  ptvauuid    varchar2(10) default ' ' not null,
  ptvaprov    varchar2(8) default ' ' not null,
  ptvapnam    varchar2(30) default ' ' not null,
  ptvappcd    varchar2(8) default ' ' not null,
  ptvadtyp    varchar2(1) default ' ' not null,
  ptvacnme    varchar2(4) default ' ' not null,
  ptvaestb    varchar2(10) default ' ' not null,
  ptvaspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pataudva on pataudva
(
ptvaaudd,
ptvaaudt,
ptvaaudp,
ptvaaudr
)
tablespace pas_indx; 
create table patvadaf
(
  ptvacode    varchar2(5) default ' ' not null,
  ptvadesc    varchar2(30) default ' ' not null,
  ptvanhsc    varchar2(4) default ' ' not null,
  ptvaactv    varchar2(1) default ' ' not null,
  ptvasdat    varchar2(8) default ' ' not null,
  ptvasupd    varchar2(1) default ' ' not null,
  ptvaedat    varchar2(8) default ' ' not null,
  ptvaeupd    varchar2(1) default ' ' not null,
  ptvacdat    varchar2(8) default ' ' not null,
  ptvactim    varchar2(8) default ' ' not null,
  ptvacuid    varchar2(10) default ' ' not null,
  ptvaudat    varchar2(8) default ' ' not null,
  ptvautim    varchar2(8) default ' ' not null,
  ptvauuid    varchar2(10) default ' ' not null,
  ptvaprov    varchar2(8) default ' ' not null,
  ptvapnam    varchar2(30) default ' ' not null,
  ptvappcd    varchar2(8) default ' ' not null,
  ptvadtyp    varchar2(1) default ' ' not null,
  ptvacnme    varchar2(4) default ' ' not null,
  ptvaestb    varchar2(10) default ' ' not null,
  ptvaspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patvada1 primary key( 
ptvacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patvada2 on patvadaf
(
ptvadesc,
ptvacode
)
  tablespace pas_indx; 
create unique index patvada3 on patvadaf
(
ptvanhsc,
ptvacode
)
  tablespace pas_indx; 
