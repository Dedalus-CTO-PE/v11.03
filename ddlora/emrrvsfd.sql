create table emrrvsaf
(
  emrvresp    varchar2(3) default ' ' not null,
  emrvsdat    varchar2(8) default ' ' not null,
  emrvvisn    varchar2(8) default ' ' not null,
  emrvpsta    varchar2(1) default ' ' not null,
  emrvcuid    varchar2(10) default ' ' not null,
  emrvcdat    varchar2(8) default ' ' not null,
  emrvctim    varchar2(8) default ' ' not null,
  emrvuuid    varchar2(10) default ' ' not null,
  emrvudat    varchar2(8) default ' ' not null,
  emrvutim    varchar2(8) default ' ' not null,
  emrvspar    varchar2(60) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrrvsa1 primary key( 
emrvresp,
emrvsdat,
emrvvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
