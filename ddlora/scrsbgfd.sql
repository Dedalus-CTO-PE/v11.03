create table scrsbgaf
(
  scsbpid     varchar2(8) default ' ' not null,
  scsbsid     varchar2(2) default ' ' not null,
  scsblin     varchar2(2) default ' ' not null,
  scsbdat     varchar2(80) default ' ' not null,
  scsbatt     varchar2(80) default ' ' not null,
  scsbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrsbga1 primary key( 
scsbpid,
scsbsid,
scsblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
