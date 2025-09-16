create table acclodaf
(
  acloaccn    varchar2(20) default ' ' not null,
  aclostat    varchar2(1) default ' ' not null,
  aclosdat    varchar2(8) default ' ' not null,
  aclourno    varchar2(8) default ' ' not null,
  acloudat    varchar2(8) default ' ' not null,
  acloutim    varchar2(8) default ' ' not null,
  aclowuid    varchar2(10) default ' ' not null,
  aclospar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint accloda1 primary key( 
acloaccn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index accloda2 on acclodaf
(
aclourno,
acloaccn
)
  tablespace pas_indx; 
