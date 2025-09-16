create table alllonaf
(
  allourno    char(8) default ' ' not null,
  alloloan    char(8) default ' ' not null,
  allolgrp    char(3) default ' ' not null,
  alloequi    char(10) default ' ' not null,
  alloldat    char(8) default ' ' not null,
  alloltim    char(8) default ' ' not null,
  allother    char(10) default ' ' not null,
  allotype    char(3) default ' ' not null,
  allostat    char(1) default ' ' not null,
  alloedat    char(8) default ' ' not null,
  allovdat    char(8) default ' ' not null,
  alloqtyi    decimal(8,0) default 0 not null,
  alloiuid    char(10) default ' ' not null,
  allordat    char(8) default ' ' not null,
  allortim    char(8) default ' ' not null,
  alloruid    char(10) default ' ' not null,
  allocond    char(3) default ' ' not null,
  allocdat    char(8) default ' ' not null,
  alloctim    char(8) default ' ' not null,
  allocuid    char(10) default ' ' not null,
  alloudat    char(8) default ' ' not null,
  alloutim    char(8) default ' ' not null,
  allouuid    char(10) default ' ' not null,
  allondat    char(8) default ' ' not null,
  alloreas    char(3) default ' ' not null,
  allospar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index alllona1 on alllonaf
(
allourno,
alloloan
);
create unique index alllona2 on alllonaf
(
allourno,
alloldat,
alloloan
);
create unique index alllona3 on alllonaf
(
allordat,
allourno,
alloloan
);
create unique index alllona4 on alllonaf
(
alloequi,
allostat,
allourno,
alloloan
);
create unique index alllona5 on alllonaf
(
allostat,
alloldat,
allourno,
alloloan
);
revoke all on alllonaf from public ; 
grant select on alllonaf to public ; 
