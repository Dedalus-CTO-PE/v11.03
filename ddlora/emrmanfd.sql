create table emrmanaf
(
  demmascr    varchar2(2) default ' ' not null,
  demmafld    varchar2(5) default ' ' not null,
  emmaresp    varchar2(1) default ' ' not null,
  emmaspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrmana1 primary key( 
demmascr,
demmafld)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
