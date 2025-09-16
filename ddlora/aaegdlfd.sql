create table aaegdlaf
(
  aedlmain    varchar2(2) default ' ' not null,
  aedlcode    varchar2(1) default ' ' not null,
  aedldesc    varchar2(20) default ' ' not null,
  aedlspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegdla1 primary key( 
aedlmain,
aedlcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
