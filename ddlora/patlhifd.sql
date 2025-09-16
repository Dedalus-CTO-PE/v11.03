create table patlhisf
(
  dptlhadm    varchar2(8) default ' ' not null,
  ptlhdate    varchar2(8) default ' ' not null,
  dptlhlco    varchar2(3) default ' ' not null,
  ptlhtime    varchar2(8) default ' ' not null,
  ptlhseid    varchar2(4) default ' ' not null,
  ptlhspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlhis1 primary key( 
dptlhadm,
ptlhdate,
dptlhlco)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patlhis2 on patlhisf
(
dptlhlco,
ptlhdate,
dptlhadm
)
  tablespace pas_indx; 
