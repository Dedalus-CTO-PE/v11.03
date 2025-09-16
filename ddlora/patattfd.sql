create table patattaf
(
  ptataddr    varchar2(6) default ' ' not null,
  ptatengl    varchar2(25) default ' ' not null,
  ptathori    varchar2(30) default ' ' not null,
  ptatspar    varchar2(9) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patatta1 primary key( 
ptataddr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
