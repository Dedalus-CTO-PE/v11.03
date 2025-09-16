create table legmasaf
(
  lomasite    char(6) default ' ' not null,
  lomaclin    char(6) default ' ' not null,
  lomatyp     char(6) default ' ' not null,
  dlomaday    char(1) default ' ' not null,
  lomastar    char(5) default ' ' not null,
  lomafin     char(5) default ' ' not null,
  lomaend     char(5) default ' ' not null,
  lomacind    char(3) default ' ' not null,
  lomareg     char(1) default ' ' not null,
  lomakdoc    char(1) default ' ' not null,
  lomacom1    char(40) default ' ' not null,
  lomacom2    char(40) default ' ' not null,
  lomadurn    decimal(3,0) default 0 not null,
  lomanews    decimal(1,0) default 0 not null,
  lomaspcs    decimal(1,0) default 0 not null,
  lomastat    decimal(1,0) default 0 not null,
  lomafreq    char(5) default ' ' not null,
  dlomaseq    char(4) default ' ' not null,
  lomalock    char(2) default ' ' not null,
  lomafref    decimal(1,0) default 0 not null,
  lomafrey    char(52) default ' ' not null,
  lomadate    char(8) default ' ' not null,
  lotmaavi    char(1) default ' ' not null,
  lotmastv    char(1) default ' ' not null,
  lotmasup    char(1) default ' ' not null,
  lotmarus    char(1) default ' ' not null,
  lotmadcm    char(1) default ' ' not null,
  lotmaixt    char(1) default ' ' not null,
  lotmadef    char(6) default ' ' not null,
  lotmauat    char(1) default ' ' not null,
  lotmaddn    decimal(2,0) default 0 not null,
  lotmandr    decimal(2,0) default 0 not null,
  lotmalpt    decimal(3,0) default 0 not null,
  lotmalgp    decimal(3,0) default 0 not null,
  lotmalpd    decimal(3,0) default 0 not null,
  lotmabkl    decimal(3,0) default 0 not null,
  lotmaral    decimal(3,0) default 0 not null,
  lotmarsl    decimal(3,0) default 0 not null,
  lotmacls    char(6) default ' ' not null,
  lotmahos    char(3) default ' ' not null,
  lotmaclo    char(30) default ' ' not null,
  lotmawdc    char(1) default ' ' not null,
  lotmawar    char(3) default ' ' not null,
  lotmalty    char(3) default ' ' not null,
  lotmadfs    char(1) default ' ' not null,
  lotmadfg    char(1) default ' ' not null,
  lotmagrp    char(1) default ' ' not null,
  dlotmaso    char(1) default ' ' not null,
  dlotmano    char(2) default ' ' not null,
  dlotmasf    char(1) default ' ' not null,
  dlotmasl    char(1) default ' ' not null,
  lotmasbk    char(2) default ' ' not null,
  lotmasap    char(2) default ' ' not null,
  lotmaspm    char(2) default ' ' not null,
  lotmasgp    char(2) default ' ' not null,
  dlotmalp    char(3) default ' ' not null,
  dlotmasr    char(3) default ' ' not null,
  dlotmanc    char(1) default ' ' not null,
  dlotmamu    char(1) default ' ' not null,
  lotmaspa    char(29) default ' ' not null,
  lf          char(1)
);
create unique index legmasa1 on legmasaf
(
lomasite,
lomaclin,
dlomaday,
lomastar
);
create unique index legmasa2 on legmasaf
(
lomasite,
lomatyp,
lomaclin,
dlomaday,
lomastar
);
create unique index legmasa3 on legmasaf
(
lomasite,
dlomaseq,
lomaclin,
dlomaday,
lomastar
);
revoke all on legmasaf from public ; 
grant select on legmasaf to public ; 
