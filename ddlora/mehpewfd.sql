create table mehpewaf
(
  mhpwuniq    varchar2(9) default ' ' not null,
  mhpwxcnt    varchar2(3) default ' ' not null,
  mhpwtype    varchar2(1) default ' ' not null,
  mhpwercd    varchar2(9) default ' ' not null,
  mhpwspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpewa1 primary key( 
mhpwuniq,
mhpwxcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
