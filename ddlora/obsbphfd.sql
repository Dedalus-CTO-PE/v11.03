create table obsbphaf
(
  obbpvisn    varchar2(8) default ' ' not null,
  obbpline    varchar2(3) default ' ' not null,
  obbpdesc    varchar2(127) default ' ' not null,
  obbpspar    varchar2(127) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obsbpha1 primary key( 
obbpvisn,
obbpline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
