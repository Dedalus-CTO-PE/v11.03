create table obsdiaaf
(
  obdivisn    varchar2(8) default ' ' not null,
  obdiline    varchar2(3) default ' ' not null,
  obdidiag    varchar2(127) default ' ' not null,
  obdispar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsdiaa1 primary key( 
obdivisn,
obdiline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
