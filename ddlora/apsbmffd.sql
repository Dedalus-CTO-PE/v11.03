create table apsbmfaf
(
  apbmbch     varchar2(5) default ' ' not null,
  apbmled     varchar2(2) default ' ' not null,
  apbmdis     varchar2(5) default ' ' not null,
  apbmres     varchar2(4) default ' ' not null,
  apbmtot     number(14,2) default 0 not null,
  apbmtyp     varchar2(2) default ' ' not null,
  apbmopr     varchar2(4) default ' ' not null,
  apbmdat     varchar2(8) default ' ' not null,
  apbmadt     varchar2(8) default ' ' not null,
  apbmudt     varchar2(8) default ' ' not null,
  apbmchq     varchar2(15) default ' ' not null,
  apbmspa     varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsbmfa1 primary key( 
apbmbch)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsbmfa2 on apsbmfaf
(
apbmtyp,
apbmbch
)
  tablespace pas_indx; 
create unique index apsbmfa3 on apsbmfaf
(
apbmudt,
apbmbch
)
  tablespace pas_indx; 
create unique index apsbmfa4 on apsbmfaf
(
apbmtyp,
apbmadt,
apbmbch
)
  tablespace pas_indx; 
