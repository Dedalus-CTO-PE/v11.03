create table patfltrf
(
  dptflltn    varchar2(3) default ' ' not null,
  dptfllin    varchar2(3) default ' ' not null,
  ptfltext    varchar2(70) default ' ' not null,
  ptfllvar    number(1,0) default 0 not null,
  ptflpbot    number(2,0) default 0 not null,
  ptflptop    number(2,0) default 0 not null,
  ptflppag    number(3,0) default 0 not null,
  ptflptab    number(2,0) default 0 not null,
  ptflactv    varchar2(1) default ' ' not null,
  ptflspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patflet1 primary key( 
dptflltn,
dptfllin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patflet2 on patfltrf
(
dptfllin,
dptflltn
)
  tablespace pas_indx; 
