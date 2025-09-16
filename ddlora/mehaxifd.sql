create table mehaudax
(
  mhaxaudd    varchar2(8) default ' ' not null,
  mhaxaudt    varchar2(8) default ' ' not null,
  mhaxaudp    varchar2(2) default ' ' not null,
  mhaxaudr    varchar2(1) default ' ' not null,
  mhaxauds    number(1,0) default 0 not null,
  mhaxaudo    varchar2(4) default ' ' not null,
  dmhaxtyp    varchar2(1) default ' ' not null,
  mhaxcode    varchar2(9) default ' ' not null,
  mhaxdesc    varchar2(70) default ' ' not null,
  mhaxstat    varchar2(1) default ' ' not null,
  mhaxspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mehaudax on mehaudax
(
mhaxaudd,
mhaxaudt,
mhaxaudp,
mhaxaudr
)
tablespace pas_indx; 
create table mehaxiaf
(
  dmhaxtyp    varchar2(1) default ' ' not null,
  mhaxcode    varchar2(9) default ' ' not null,
  mhaxdesc    varchar2(70) default ' ' not null,
  mhaxstat    varchar2(1) default ' ' not null,
  mhaxspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehaxia1 primary key( 
dmhaxtyp,
mhaxcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
