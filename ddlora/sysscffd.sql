create table sysscfaf
(
  syscsys     varchar2(2) default ' ' not null,
  syscid3     varchar2(3) default ' ' not null,
  syscdes     varchar2(35) default ' ' not null,
  syscspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sysscfa1 primary key( 
syscsys)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sysscfa2 on sysscfaf
(
syscid3
)
  tablespace pas_indx; 
