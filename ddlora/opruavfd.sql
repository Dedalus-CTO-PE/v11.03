create table opruavaf
(
  opuathet    varchar2(6) default ' ' not null,
  opuadate    varchar2(8) default ' ' not null,
  opuastim    varchar2(5) default ' ' not null,
  opuaetim    varchar2(5) default ' ' not null,
  opauspar    varchar2(36) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opruava1 primary key( 
opuathet,
opuadate,
opuastim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
