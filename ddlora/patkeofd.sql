create table patkeoaf
(
  ptkotype    varchar2(1) default ' ' not null,
  ptkocode    varchar2(6) default ' ' not null,
  ptkokwrd    varchar2(15) default ' ' not null,
  ptkospar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patkeoa1 primary key( 
ptkotype,
ptkocode,
ptkokwrd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patkeoa2 on patkeoaf
(
ptkokwrd,
ptkotype,
ptkocode
)
  tablespace pas_indx; 
create unique index patkeoa3 on patkeoaf
(
ptkotype,
ptkokwrd,
ptkocode
)
  tablespace pas_indx; 
