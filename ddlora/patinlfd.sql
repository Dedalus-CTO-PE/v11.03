create table patinlaf
(
  ptilinvn    varchar2(8) default ' ' not null,
  ptiltype    varchar2(1) default ' ' not null,
  ptilgrp     varchar2(3) default ' ' not null,
  ptilcode    varchar2(9) default ' ' not null,
  ptilactl    number(14,2) default 0 not null,
  ptilloss    number(14,2) default 0 not null,
  ptilspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patinla1 primary key( 
ptilinvn,
ptiltype,
ptilgrp,
ptilcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
