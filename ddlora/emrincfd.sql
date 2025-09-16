create table emrincaf
(
  emipadmn    varchar2(8) default ' ' not null,
  emipdcom    varchar2(1) default ' ' not null,
  emipncom    varchar2(1) default ' ' not null,
  emipccom    varchar2(1) default ' ' not null,
  emipdoct    varchar2(10) default ' ' not null,
  emipnurs    varchar2(10) default ' ' not null,
  emipspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrinca1 primary key( 
emipadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrinca2 on emrincaf
(
emipdoct,
emipadmn
)
  tablespace pas_indx; 
create unique index emrinca3 on emrincaf
(
emipnurs,
emipadmn
)
  tablespace pas_indx; 
