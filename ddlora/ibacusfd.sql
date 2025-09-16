create table ibacusaf
(
  ibcusgrp    varchar2(3) default ' ' not null,
  ibcuuser    varchar2(10) default ' ' not null,
  ibcucdat    varchar2(8) default ' ' not null,
  ibcuctim    varchar2(8) default ' ' not null,
  ibcucuid    varchar2(10) default ' ' not null,
  ibcuspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibacusa1 primary key( 
ibcusgrp,
ibcuuser)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibacusa2 on ibacusaf
(
ibcuuser,
ibcusgrp
)
  tablespace pas_indx; 
