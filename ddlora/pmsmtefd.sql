create table pmsmteaf
(
  pmmivisn    varchar2(8) default ' ' not null,
  pmmitran    varchar2(6) default ' ' not null,
  pmmiurno    varchar2(8) default ' ' not null,
  pmmisyst    varchar2(2) default ' ' not null,
  pmmiitem    varchar2(9) default ' ' not null,
  pmmidesc    varchar2(30) default ' ' not null,
  pmmides2    varchar2(35) default ' ' not null,
  pmmitdat    varchar2(8) default ' ' not null,
  pmmirtyp    varchar2(1) default ' ' not null,
  pmmirefn    varchar2(12) default ' ' not null,
  pmmiamtt    number(14,2) default 0 not null,
  pmmiamtg    number(14,2) default 0 not null,
  pmmiamth    number(14,2) default 0 not null,
  pmmiamtp    number(14,2) default 0 not null,
  pmmirbat    number(14,2) default 0 not null,
  pmmitdoc    varchar2(6) default ' ' not null,
  pmmiserv    number(5,0) default 0 not null,
  pmmiodoc    varchar2(6) default ' ' not null,
  pmmisess    varchar2(2) default ' ' not null,
  pmmimgrp    varchar2(3) default ' ' not null,
  pmmibtch    varchar2(8) default ' ' not null,
  pmmiinvn    number(1,0) default 0 not null,
  pmmigsta    number(1,0) default 0 not null,
  pmmigstc    varchar2(6) default ' ' not null,
  pmmigstm    number(14,2) default 0 not null,
  pmmidupd    varchar2(8) default ' ' not null,
  pmmitupd    varchar2(8) default ' ' not null,
  pmmiwusr    varchar2(10) default ' ' not null,
  pmmimvbr    varchar2(1) default ' ' not null,
  pmmiuniq    varchar2(10) default ' ' not null,
  pmmispar    varchar2(124) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmtea1 primary key( 
pmmivisn,
pmmitran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsmtea4 on pmsmteaf
(
pmmivisn,
pmmirtyp,
pmmimgrp,
pmmitran
)
  tablespace pas_indx; 
