create table emrecaaf
(
  emeainvn    varchar2(8) default ' ' not null,
  emeadate    varchar2(8) default ' ' not null,
  emeatime    varchar2(8) default ' ' not null,
  emeabatn    varchar2(8) default ' ' not null,
  emeastat    number(2,0) default 0 not null,
  emeatype    varchar2(2) default ' ' not null,
  emeaoper    varchar2(10) default ' ' not null,
  emeatrid    varchar2(24) default ' ' not null,
  emeaeror    varchar2(4) default ' ' not null,
  emeaerot    varchar2(100) default ' ' not null,
  emeamodl    varchar2(1) default ' ' not null,
  emeaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrecaa1 primary key( 
emeainvn,
emeadate,
emeatime,
emeatype,
emeamodl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrecaa2 on emrecaaf
(
emeadate,
emeatime,
emeatype,
emeainvn,
emeamodl
)
  tablespace pas_indx; 
create unique index emrecaa3 on emrecaaf
(
emeainvn,
emeabatn,
emeadate,
emeatime,
emeatype,
emeamodl
)
  tablespace pas_indx; 
