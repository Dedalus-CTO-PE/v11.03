create table pcpaudds
(
  pcdsaudd    varchar2(8) default ' ' not null,
  pcdsaudt    varchar2(8) default ' ' not null,
  pcdsaudp    varchar2(2) default ' ' not null,
  pcdsaudr    varchar2(1) default ' ' not null,
  pcdsauds    number(1,0) default 0 not null,
  pcdsaudo    varchar2(4) default ' ' not null,
  dpcdstyp    varchar2(2) default ' ' not null,
  pcdscode    varchar2(9) default ' ' not null,
  dpcdslin    varchar2(2) default ' ' not null,
  pcdsdesc    varchar2(60) default ' ' not null,
  pcdsspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudds on pcpaudds
(
pcdsaudd,
pcdsaudt,
pcdsaudp,
pcdsaudr
)
tablespace pas_indx; 
create table pcpdscaf
(
  dpcdstyp    varchar2(2) default ' ' not null,
  pcdscode    varchar2(9) default ' ' not null,
  dpcdslin    varchar2(2) default ' ' not null,
  pcdsdesc    varchar2(60) default ' ' not null,
  pcdsspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpdsca1 primary key( 
dpcdstyp,
pcdscode,
dpcdslin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
