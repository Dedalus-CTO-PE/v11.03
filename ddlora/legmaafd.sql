create table legmasaf
(
  lomasite    varchar2(6) default ' ' not null,
  lomaclin    varchar2(6) default ' ' not null,
  lomatyp     varchar2(6) default ' ' not null,
  dlomaday    varchar2(1) default ' ' not null,
  lomastar    varchar2(5) default ' ' not null,
  lomafin     varchar2(5) default ' ' not null,
  lomaend     varchar2(5) default ' ' not null,
  lomacind    varchar2(3) default ' ' not null,
  lomareg     varchar2(1) default ' ' not null,
  lomakdoc    varchar2(1) default ' ' not null,
  lomacom1    varchar2(40) default ' ' not null,
  lomacom2    varchar2(40) default ' ' not null,
  lomadurn    number(3,0) default 0 not null,
  lomanews    number(1,0) default 0 not null,
  lomaspcs    number(1,0) default 0 not null,
  lomastat    number(1,0) default 0 not null,
  lomafreq    varchar2(5) default ' ' not null,
  dlomaseq    varchar2(4) default ' ' not null,
  lomalock    varchar2(2) default ' ' not null,
  lomafref    number(1,0) default 0 not null,
  lomafrey    varchar2(52) default ' ' not null,
  lomadate    varchar2(8) default ' ' not null,
  lotmaavi    varchar2(1) default ' ' not null,
  lotmastv    varchar2(1) default ' ' not null,
  lotmasup    varchar2(1) default ' ' not null,
  lotmarus    varchar2(1) default ' ' not null,
  lotmadcm    varchar2(1) default ' ' not null,
  lotmaixt    varchar2(1) default ' ' not null,
  lotmadef    varchar2(6) default ' ' not null,
  lotmauat    varchar2(1) default ' ' not null,
  lotmaddn    number(2,0) default 0 not null,
  lotmandr    number(2,0) default 0 not null,
  lotmalpt    number(3,0) default 0 not null,
  lotmalgp    number(3,0) default 0 not null,
  lotmalpd    number(3,0) default 0 not null,
  lotmabkl    number(3,0) default 0 not null,
  lotmaral    number(3,0) default 0 not null,
  lotmarsl    number(3,0) default 0 not null,
  lotmacls    varchar2(6) default ' ' not null,
  lotmahos    varchar2(3) default ' ' not null,
  lotmaclo    varchar2(30) default ' ' not null,
  lotmawdc    varchar2(1) default ' ' not null,
  lotmawar    varchar2(3) default ' ' not null,
  lotmalty    varchar2(3) default ' ' not null,
  lotmadfs    varchar2(1) default ' ' not null,
  lotmadfg    varchar2(1) default ' ' not null,
  lotmagrp    varchar2(1) default ' ' not null,
  dlotmaso    varchar2(1) default ' ' not null,
  dlotmano    varchar2(2) default ' ' not null,
  dlotmasf    varchar2(1) default ' ' not null,
  dlotmasl    varchar2(1) default ' ' not null,
  lotmasbk    varchar2(2) default ' ' not null,
  lotmasap    varchar2(2) default ' ' not null,
  lotmaspm    varchar2(2) default ' ' not null,
  lotmasgp    varchar2(2) default ' ' not null,
  dlotmalp    varchar2(3) default ' ' not null,
  dlotmasr    varchar2(3) default ' ' not null,
  dlotmanc    varchar2(1) default ' ' not null,
  dlotmamu    varchar2(1) default ' ' not null,
  lotmaspa    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legmasa1 primary key( 
lomasite,
lomaclin,
dlomaday,
lomastar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legmasa2 on legmasaf
(
lomasite,
lomatyp,
lomaclin,
dlomaday,
lomastar
)
  tablespace pas_indx; 
create unique index legmasa3 on legmasaf
(
lomasite,
dlomaseq,
lomaclin,
dlomaday,
lomastar
)
  tablespace pas_indx; 
