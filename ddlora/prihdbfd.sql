create table prihdbtf
(
  prhddebt    varchar2(8) default ' ' not null,
  dprhdscn    varchar2(2) default ' ' not null,
  prhdclam    varchar2(3) default ' ' not null,
  prhdaccd    varchar2(8) default ' ' not null,
  dprhdunq    varchar2(8) default ' ' not null,
  prhdhfnd    varchar2(6) default ' ' not null,
  prhdspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prihdbt1 primary key( 
prhddebt,
dprhdscn,
prhdclam,
prhdaccd,
prhdhfnd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index prihdbt2 on prihdbtf
(
dprhdunq
)
  tablespace pas_indx; 
