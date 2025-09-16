create table legctyaf
(
  loctsite    varchar2(6) default ' ' not null,
  loctctyp    varchar2(6) default ' ' not null,
  loctgrp     varchar2(3) default ' ' not null,
  loctdesc    varchar2(30) default ' ' not null,
  loctxbok    varchar2(2) default ' ' not null,
  loctxatt    varchar2(2) default ' ' not null,
  loctbkt     varchar2(3) default ' ' not null,
  loctatt     varchar2(3) default ' ' not null,
  loctact     varchar2(1) default ' ' not null,
  loctspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legctya1 primary key( 
loctsite,
loctctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legctya2 on legctyaf
(
loctsite,
loctdesc,
loctctyp
)
  tablespace pas_indx; 
create unique index legctya3 on legctyaf
(
loctsite,
loctgrp,
loctctyp
)
  tablespace pas_indx; 
