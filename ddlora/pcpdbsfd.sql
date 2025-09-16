create table pcpauddb
(
  pcdbaudd    varchar2(8) default ' ' not null,
  pcdbaudt    varchar2(8) default ' ' not null,
  pcdbaudp    varchar2(2) default ' ' not null,
  pcdbaudr    varchar2(1) default ' ' not null,
  pcdbauds    number(1,0) default 0 not null,
  pcdbaudo    varchar2(4) default ' ' not null,
  dpcdbtyp    varchar2(2) default ' ' not null,
  pcdbclss    varchar2(9) default ' ' not null,
  pcdbcode    varchar2(9) default ' ' not null,
  pcdbspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpauddb on pcpauddb
(
pcdbaudd,
pcdbaudt,
pcdbaudp,
pcdbaudr
)
tablespace pas_indx; 
create table pcpdbsaf
(
  dpcdbtyp    varchar2(2) default ' ' not null,
  pcdbclss    varchar2(9) default ' ' not null,
  pcdbcode    varchar2(9) default ' ' not null,
  pcdbspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpdbsa1 primary key( 
dpcdbtyp,
pcdbclss,
pcdbcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
