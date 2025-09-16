create table aaegdcaf
(
  aedccode    varchar2(2) default ' ' not null,
  aedcdesc    varchar2(20) default ' ' not null,
  aedcsuba    varchar2(1) default ' ' not null,
  aedcspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegdca1 primary key( 
aedccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
