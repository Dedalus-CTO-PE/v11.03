create table obscnbaf
(
  obcbvis     varchar2(8) default ' ' not null,
  obcbcid     varchar2(4) default ' ' not null,
  obcblno     varchar2(3) default ' ' not null,
  obcbldt     varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obscnba1 primary key( 
obcbvis,
obcbcid,
obcblno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
