create table debfshaf
(
  dbshstat    varchar2(10) default ' ' not null,
  dbshdebc    varchar2(8) default ' ' not null,
  dbshdsta    varchar2(8) default ' ' not null,
  dbshtota    number(14,2) default 0 not null,
  dbshspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debfsha1 primary key( 
dbshstat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debfsha2 on debfshaf
(
dbshdebc,
dbshstat
)
  tablespace pas_indx; 
