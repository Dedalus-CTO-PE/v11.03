create table oprmbsaf
(
  opmbuniq    varchar2(10) default ' ' not null,
  opmbcntr    varchar2(3) default ' ' not null,
  opmbmbsi    varchar2(9) default ' ' not null,
  opmbcuid    varchar2(10) default ' ' not null,
  opmbcdat    varchar2(8) default ' ' not null,
  opmbctim    varchar2(8) default ' ' not null,
  opmbspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprmbsa1 primary key( 
opmbuniq,
opmbcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
