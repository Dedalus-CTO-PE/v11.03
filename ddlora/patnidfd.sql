create table patnidaf
(
  dptnihnu    varchar2(2) default ' ' not null,
  ptnilnum    varchar2(8) default ' ' not null,
  ptninmpi    varchar2(20) default ' ' not null,
  ptnispar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnida1 primary key( 
dptnihnu,
ptnilnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patnida2 on patnidaf
(
ptninmpi,
dptnihnu,
ptnilnum
)
  tablespace pas_indx; 
