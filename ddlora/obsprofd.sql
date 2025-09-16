create table obsproaf
(
  obprvisn    varchar2(8) default ' ' not null,
  obprline    varchar2(3) default ' ' not null,
  obprproc    varchar2(127) default ' ' not null,
  obprspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsproa1 primary key( 
obprvisn,
obprline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
