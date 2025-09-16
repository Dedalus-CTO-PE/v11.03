create table pathgrpf
(
  pthgcode    varchar2(6) default ' ' not null,
  pthgdesc    varchar2(50) default ' ' not null,
  pthgdfic    varchar2(6) default ' ' not null,
  pthgspar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pathgrp1 primary key( 
pthgcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
