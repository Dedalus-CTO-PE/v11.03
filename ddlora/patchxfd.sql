create table patchxaf
(
  dptchadm    varchar2(8) default ' ' not null,
  ptchdate    varchar2(8) default ' ' not null,
  ptchtime    varchar2(8) default ' ' not null,
  ptchcode    varchar2(9) default ' ' not null,
  ptchspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patchxa1 primary key( 
dptchadm,
ptchdate,
ptchtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
