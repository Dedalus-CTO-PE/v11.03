create table newitemn
(
  itemno      char(9) default ' ' not null,
  ialpha      char(6) default ' ' not null,
  idesc       char(40) default ' ' not null,
  qiamt       decimal(14,2) default 0 not null,
  imisgrp     char(3) default ' ' not null,
  iclss       char(3) default ' ' not null,
  iband1      char(3) default ' ' not null,
  iband2      char(3) default ' ' not null,
  iband3      char(3) default ' ' not null,
  iband4      char(3) default ' ' not null,
  iband5      char(3) default ' ' not null,
  iband6      char(3) default ' ' not null,
  iband7      char(3) default ' ' not null,
  iband8      char(3) default ' ' not null,
  iband9      char(3) default ' ' not null,
  iband10     char(3) default ' ' not null,
  iband11     char(3) default ' ' not null,
  iband12     char(3) default ' ' not null,
  iband13     char(3) default ' ' not null,
  iband14     char(3) default ' ' not null,
  iband15     char(3) default ' ' not null,
  iband16     char(3) default ' ' not null,
  ptitactv    char(1) default ' ' not null,
  ptitlink    char(9) default ' ' not null,
  ptitexcl    decimal(1,0) default 0 not null,
  ptitiwrn    char(1) default ' ' not null,
  ptitgsta    decimal(1,0) default 0 not null,
  ptitgstc    char(6) default ' ' not null,
  ptitdcsc    char(3) default ' ' not null,
  ptitdesc    char(60) default ' ' not null,
  ptittcer    char(3) default ' ' not null,
  ptitmsch    char(1) default ' ' not null,
  ptittccd    char(1) default ' ' not null,
  ptitserv    char(9) default ' ' not null,
  ptiteceq    char(11) default ' ' not null,
  ptitects    char(2) default ' ' not null,
  ptitlwrd    char(1) default ' ' not null,
  ptittacb    char(3) default ' ' not null,
  ptitspar    char(39) default ' ' not null,
  lf          char(1)
);
create unique index patit1m1 on newitemn
(
itemno
);
create unique index patit1m2 on newitemn
(
ialpha,
itemno
);
create unique index patit1m3 on newitemn
(
idesc,
itemno
);
revoke all on newitemn from public ; 
grant select on newitemn to public ; 
