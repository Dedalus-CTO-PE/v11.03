create table pmsmtiaf
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
  pmmicntr    char(6) default ' ' not null,
  pmmisunq    char(3) default ' ' not null,
  pmmiinct    char(1) default ' ' not null,
  pmmisubn    char(3) default ' ' not null,
  pmmiedad    char(10) default ' ' not null,
  pmmisvtm    char(8) default ' ' not null,
  pmmiccon    char(1) default ' ' not null,
  pmmischf    decimal(5,2) default 0 not null,
  pmmiityp    char(1) default ' ' not null,
  pmmidtcr    char(8) default ' ' not null,
  pmmitmcr    char(8) default ' ' not null,
  pmmiidcr    char(10) default ' ' not null,
  pmmitmno    char(1) default ' ' not null,
  pmmipmbs    char(3) default ' ' not null,
  pmmirbrs    char(3) default ' ' not null,
  pmmictyp    char(1) default ' ' not null,
  pmmiacoi    char(1) default ' ' not null,
  pmmidsov    char(1) default ' ' not null,
  pmmistxt    char(50) default ' ' not null,
  pmmilspn    char(6) default ' ' not null,
  pmmimpov    char(1) default ' ' not null,
  pmminmpt    char(2) default ' ' not null,
  pmmisdcd    char(3) default ' ' not null,
  pmmitdur    char(3) default ' ' not null,
  pmmirovr    char(3) default ' ' not null,
  pmmihosi    char(1) default ' ' not null,
  pmmispar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index pmsmtia1 on pmsmtiaf
(
pmmivisn,
pmmitran
);
create unique index pmsmtia2 on pmsmtiaf
(
pmmivisn,
pmmirtyp,
pmmitran
);
create unique index pmsmtia3 on pmsmtiaf
(
pmmirtyp,
pmmidupd,
pmmivisn,
pmmitran
);
create unique index pmsmtia4 on pmsmtiaf
(
pmmivisn,
pmmirtyp,
pmmimgrp,
pmmitran
);
create unique index pmsmtia5 on pmsmtiaf
(
pmmivisn,
pmmicntr,
pmmirtyp,
pmmimgrp,
pmmitran
);
create unique index pmsmtia6 on pmsmtiaf
(
pmmivisn,
pmmiedad,
pmmitran
);
revoke all on pmsmtiaf from public ; 
grant select on pmsmtiaf to public ; 
