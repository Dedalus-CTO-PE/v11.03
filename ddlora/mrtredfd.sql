create table mrtredaf
(
  mredeid     varchar2(4) default ' ' not null,
  mredvis     varchar2(8) default ' ' not null,
  mredlev1    varchar2(10) default ' ' not null,
  mredlev2    varchar2(10) default ' ' not null,
  mredlev3    varchar2(10) default ' ' not null,
  mredlev4    varchar2(10) default ' ' not null,
  mredanl1    number(16,4) default 0 not null,
  mredanl2    number(16,4) default 0 not null,
  mredanl3    number(16,4) default 0 not null,
  mreddel     varchar2(1) default ' ' not null,
  mredurno    varchar2(8) default ' ' not null,
  mredtdig    varchar2(8) default ' ' not null,
  mredspar    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtreda1 primary key( 
mredeid,
mredvis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtreda2 on mrtredaf
(
mredlev1,
mredlev2,
mredlev3,
mredlev4,
mredeid,
mredvis
)
  tablespace pas_indx; 
create unique index mrtreda3 on mrtredaf
(
mredeid,
mredtdig,
mredvis
)
  tablespace pas_indx; 
