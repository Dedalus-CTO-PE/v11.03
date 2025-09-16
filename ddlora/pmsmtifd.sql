create table pmsmtiaf
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
  pmmicntr    varchar2(6) default ' ' not null,
  pmmisunq    varchar2(3) default ' ' not null,
  pmmiinct    varchar2(1) default ' ' not null,
  pmmisubn    varchar2(3) default ' ' not null,
  pmmiedad    varchar2(10) default ' ' not null,
  pmmisvtm    varchar2(8) default ' ' not null,
  pmmiccon    varchar2(1) default ' ' not null,
  pmmischf    number(5,2) default 0 not null,
  pmmiityp    varchar2(1) default ' ' not null,
  pmmidtcr    varchar2(8) default ' ' not null,
  pmmitmcr    varchar2(8) default ' ' not null,
  pmmiidcr    varchar2(10) default ' ' not null,
  pmmitmno    varchar2(1) default ' ' not null,
  pmmipmbs    varchar2(3) default ' ' not null,
  pmmirbrs    varchar2(3) default ' ' not null,
  pmmictyp    varchar2(1) default ' ' not null,
  pmmiacoi    varchar2(1) default ' ' not null,
  pmmidsov    varchar2(1) default ' ' not null,
  pmmistxt    varchar2(50) default ' ' not null,
  pmmilspn    varchar2(6) default ' ' not null,
  pmmimpov    varchar2(1) default ' ' not null,
  pmminmpt    varchar2(2) default ' ' not null,
  pmmisdcd    varchar2(3) default ' ' not null,
  pmmitdur    varchar2(3) default ' ' not null,
  pmmirovr    varchar2(3) default ' ' not null,
  pmmihosi    varchar2(1) default ' ' not null,
  pmmispar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsmtia1 primary key( 
pmmivisn,
pmmitran)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsmtia2 on pmsmtiaf
(
pmmivisn,
pmmirtyp,
pmmitran
)
  tablespace pas_indx; 
create unique index pmsmtia3 on pmsmtiaf
(
pmmirtyp,
pmmidupd,
pmmivisn,
pmmitran
)
  tablespace pas_indx; 
create unique index pmsmtia4 on pmsmtiaf
(
pmmivisn,
pmmirtyp,
pmmimgrp,
pmmitran
)
  tablespace pas_indx; 
create unique index pmsmtia5 on pmsmtiaf
(
pmmivisn,
pmmicntr,
pmmirtyp,
pmmimgrp,
pmmitran
)
  tablespace pas_indx; 
create unique index pmsmtia6 on pmsmtiaf
(
pmmivisn,
pmmiedad,
pmmitran
)
  tablespace pas_indx; 
