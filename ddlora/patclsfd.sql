create table patclsaf
(
  ptcicode    varchar2(2) default ' ' not null,
  ptcidesc    varchar2(40) default ' ' not null,
  ptcispar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patclsa1 primary key( 
ptcicode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
