create table patachaf
(
  dptahadm    varchar2(8) default ' ' not null,
  ptahdate    varchar2(8) default ' ' not null,
  ptahanni    number(14,2) default 0 not null,
  ptahtotl    number(14,2) default 0 not null,
  ptahspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patacha1 primary key( 
dptahadm,
ptahdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
