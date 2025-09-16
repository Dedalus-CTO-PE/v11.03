create table pmsmteaf
(
  pmmivisn    char(8) default ' ' not null,
  pmmitran    char(6) default ' ' not null,
  pmmiurno    char(8) default ' ' not null,
  pmmisyst    char(2) default ' ' not null,
  pmmiitem    char(9) default ' ' not null,
  pmmidesc    char(30) default ' ' not null,
  pmmides2    char(35) default ' ' not null,
  pmmitdat    char(8) default ' ' not null,
  pmmirtyp    char(1) default ' ' not null,
  pmmirefn    char(12) default ' ' not null,
  pmmiamtt    decimal(14,2) default 0 not null,
  pmmiamtg    decimal(14,2) default 0 not null,
  pmmiamth    decimal(14,2) default 0 not null,
  pmmiamtp    decimal(14,2) default 0 not null,
  pmmirbat    decimal(14,2) default 0 not null,
  pmmitdoc    char(6) default ' ' not null,
  pmmiserv    decimal(5,0) default 0 not null,
  pmmiodoc    char(6) default ' ' not null,
  pmmisess    char(2) default ' ' not null,
  pmmimgrp    char(3) default ' ' not null,
  pmmibtch    char(8) default ' ' not null,
  pmmiinvn    decimal(1,0) default 0 not null,
  pmmigsta    decimal(1,0) default 0 not null,
  pmmigstc    char(6) default ' ' not null,
  pmmigstm    decimal(14,2) default 0 not null,
  pmmidupd    char(8) default ' ' not null,
  pmmitupd    char(8) default ' ' not null,
  pmmiwusr    char(10) default ' ' not null,
  pmmimvbr    char(1) default ' ' not null,
  pmmiuniq    char(10) default ' ' not null,
  pmmispar    char(124) default ' ' not null,
  lf          char(1)
);
create unique index pmsmtea1 on pmsmteaf
(
pmmivisn,
pmmitran
);
create unique index pmsmtea4 on pmsmteaf
(
pmmivisn,
pmmirtyp,
pmmimgrp,
pmmitran
);
revoke all on pmsmteaf from public ; 
grant select on pmsmteaf to public ; 
