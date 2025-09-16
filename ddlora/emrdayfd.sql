create table emrdayaf
(
  emdydat     varchar2(8) default ' ' not null,
  emdycnt     number(4,0) default 0 not null,
  emdyspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdaya1 primary key( 
emdydat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
