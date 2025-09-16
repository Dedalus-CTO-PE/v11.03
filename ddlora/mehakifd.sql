create table mehakiaf
(
  mhakktyp    varchar2(1) default ' ' not null,
  mhakkitm    varchar2(9) default ' ' not null,
  mhakkkwd    varchar2(15) default ' ' not null,
  mhakspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehakia1 primary key( 
mhakktyp,
mhakkitm,
mhakkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mehakia2 on mehakiaf
(
mhakkkwd,
mhakktyp,
mhakkitm
)
  tablespace pas_indx; 
