create table apsapyaf
(
  apapcrd     varchar2(5) default ' ' not null,
  apapref     varchar2(15) default ' ' not null,
  apaptyp     varchar2(1) default ' ' not null,
  apapdoc     varchar2(15) default ' ' not null,
  apapord     varchar2(8) default ' ' not null,
  apaplin     varchar2(3) default ' ' not null,
  apapbch     varchar2(5) default ' ' not null,
  apappay     number(14,2) default 0 not null,
  apapgst     number(14,2) default 0 not null,
  apaptpy     number(14,2) default 0 not null,
  apapchq     varchar2(15) default ' ' not null,
  apapdat     varchar2(8) default ' ' not null,
  apappyc     varchar2(15) default ' ' not null,
  apappyd     varchar2(8) default ' ' not null,
  apappyb     varchar2(5) default ' ' not null,
  apapdof     varchar2(8) default ' ' not null,
  apapdue     varchar2(8) default ' ' not null,
  apappin     varchar2(1) default ' ' not null,
  apapmdi     varchar2(3) default ' ' not null,
  apapsky     varchar2(6) default ' ' not null,
  apappor     varchar2(1) default ' ' not null,
  apapgmt     varchar2(1) default ' ' not null,
  apappayg    varchar2(1) default ' ' not null,
  apapspa     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsapya1 primary key( 
apapcrd,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsapya2 on apsapyaf
(
apapcrd,
apapref,
apaptyp,
apapord,
apaplin,
apapdoc,
apapbch
)
  tablespace pas_indx; 
create unique index apsapya3 on apsapyaf
(
apapcrd,
apapmdi,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch
)
  tablespace pas_indx; 
create unique index apsapya4 on apsapyaf
(
apapsky,
apapcrd,
apapref,
apaptyp,
apapdoc,
apapord,
apaplin,
apapbch
)
  tablespace pas_indx; 
