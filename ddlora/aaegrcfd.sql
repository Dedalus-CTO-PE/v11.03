create table aaegrcaf
(
  aerccode    varchar2(2) default ' ' not null,
  aercdesc    varchar2(20) default ' ' not null,
  aercflag    varchar2(1) default ' ' not null,
  aercspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaegrca1 primary key( 
aerccode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
