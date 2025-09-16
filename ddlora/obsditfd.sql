create table obsditaf
(
  obdtvisn    varchar2(8) default ' ' not null,
  obdtcntr    varchar2(3) default ' ' not null,
  obdtdiet    varchar2(127) default ' ' not null,
  obdtspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsdita1 primary key( 
obdtvisn,
obdtcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
