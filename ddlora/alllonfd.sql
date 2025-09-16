create table alllonaf
(
  allourno    varchar2(8) default ' ' not null,
  alloloan    varchar2(8) default ' ' not null,
  allolgrp    varchar2(3) default ' ' not null,
  alloequi    varchar2(10) default ' ' not null,
  alloldat    varchar2(8) default ' ' not null,
  alloltim    varchar2(8) default ' ' not null,
  allother    varchar2(10) default ' ' not null,
  allotype    varchar2(3) default ' ' not null,
  allostat    varchar2(1) default ' ' not null,
  alloedat    varchar2(8) default ' ' not null,
  allovdat    varchar2(8) default ' ' not null,
  alloqtyi    number(8,0) default 0 not null,
  alloiuid    varchar2(10) default ' ' not null,
  allordat    varchar2(8) default ' ' not null,
  allortim    varchar2(8) default ' ' not null,
  alloruid    varchar2(10) default ' ' not null,
  allocond    varchar2(3) default ' ' not null,
  allocdat    varchar2(8) default ' ' not null,
  alloctim    varchar2(8) default ' ' not null,
  allocuid    varchar2(10) default ' ' not null,
  alloudat    varchar2(8) default ' ' not null,
  alloutim    varchar2(8) default ' ' not null,
  allouuid    varchar2(10) default ' ' not null,
  allondat    varchar2(8) default ' ' not null,
  alloreas    varchar2(3) default ' ' not null,
  allospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint alllona1 primary key( 
allourno,
alloloan)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index alllona2 on alllonaf
(
allourno,
alloldat,
alloloan
)
  tablespace pas_indx; 
create unique index alllona3 on alllonaf
(
allordat,
allourno,
alloloan
)
  tablespace pas_indx; 
create unique index alllona4 on alllonaf
(
alloequi,
allostat,
allourno,
alloloan
)
  tablespace pas_indx; 
create unique index alllona5 on alllonaf
(
allostat,
alloldat,
allourno,
alloloan
)
  tablespace pas_indx; 
