create table patcslaf
(
  ptclurno    varchar2(8) default ' ' not null,
  dptcluni    varchar2(3) default ' ' not null,
  ptcldesc    varchar2(30) default ' ' not null,
  ptclspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcsla1 primary key( 
ptclurno,
dptcluni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcsla2 on patcslaf
(
ptclurno,
ptcldesc,
dptcluni
)
  tablespace pas_indx; 
