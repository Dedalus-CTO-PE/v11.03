create table aaegtlaf
(
  aetlmain    varchar2(4) default ' ' not null,
  aetlcode    varchar2(2) default ' ' not null,
  aetldesc    varchar2(20) default ' ' not null,
  aetlspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegtla1 primary key( 
aetlmain,
aetlcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
