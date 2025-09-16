create table ibacgsaf
(
  ibcgsgrp    varchar2(3) default ' ' not null,
  ibcgdesc    varchar2(20) default ' ' not null,
  ibcgactv    varchar2(1) default ' ' not null,
  ibcgcdat    varchar2(8) default ' ' not null,
  ibcgctim    varchar2(8) default ' ' not null,
  ibcgcuid    varchar2(10) default ' ' not null,
  ibcgudat    varchar2(8) default ' ' not null,
  ibcgutim    varchar2(8) default ' ' not null,
  ibcguuid    varchar2(10) default ' ' not null,
  ibcgspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibacgsa1 primary key( 
ibcgsgrp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibacgsa2 on ibacgsaf
(
ibcgdesc,
ibcgsgrp
)
  tablespace pas_indx; 
