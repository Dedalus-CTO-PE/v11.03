create table aaecotaf
(
  aectdate    varchar2(8) default ' ' not null,
  aecttime    varchar2(5) default ' ' not null,
  aectcons    varchar2(6) default ' ' not null,
  aectspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaecota1 primary key( 
aectdate,
aecttime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
