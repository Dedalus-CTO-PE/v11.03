create table pcpfraaf
(
  pcfacode    varchar2(9) default ' ' not null,
  pcfadesc    varchar2(30) default ' ' not null,
  pcfaonce    varchar2(1) default ' ' not null,
  pcfaspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpfraa1 primary key( 
pcfacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pcpfraa2 on pcpfraaf
(
pcfadesc,
pcfacode
)
  tablespace pas_indx; 
