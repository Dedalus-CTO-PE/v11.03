create table aaegtcaf
(
  aetccode    varchar2(4) default ' ' not null,
  aetcdesc    varchar2(20) default ' ' not null,
  aetcsuba    varchar2(1) default ' ' not null,
  aetcspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegtca1 primary key( 
aetccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
