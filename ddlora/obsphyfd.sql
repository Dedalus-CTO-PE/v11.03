create table obsphyaf
(
  obphvisn    varchar2(8) default ' ' not null,
  obphline    varchar2(3) default ' ' not null,
  obphphys    varchar2(127) default ' ' not null,
  obphspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsphya1 primary key( 
obphvisn,
obphline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
