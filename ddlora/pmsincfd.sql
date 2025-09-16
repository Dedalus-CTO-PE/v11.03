create table pmsincaf
(
  pminuniq    varchar2(10) default ' ' not null,
  pminspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsinca1 primary key( 
pminuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
