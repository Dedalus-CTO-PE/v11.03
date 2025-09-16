create table patcomaf
(
  ptcourno    varchar2(8) default ' ' not null,
  dptcocln    varchar2(3) default ' ' not null,
  ptcoline    varchar2(70) default ' ' not null,
  ptcooper    varchar2(4) default ' ' not null,
  ptcospar    varchar2(14) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcoma1 primary key( 
ptcourno,
dptcocln)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
