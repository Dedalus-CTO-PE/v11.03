create table compolaf
(
  cmplstat    varchar2(1) default ' ' not null,
  cmpltype    varchar2(3) default ' ' not null,
  cmpluniq    varchar2(20) default ' ' not null,
  cmplfiln    varchar2(120) default ' ' not null,
  cmplspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint compola1 primary key( 
cmplstat,
cmpltype,
cmpluniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index compola2 on compolaf
(
cmpltype,
cmpluniq
)
  tablespace pas_indx; 
create unique index compola3 on compolaf
(
cmpltype,
cmplstat,
cmpluniq
)
  tablespace pas_indx; 
