create table ceappmaf
(
  ceppind     char(1) default ' ' not null,
  ceppdes     char(35) default ' ' not null,
  ceppnurf    decimal(8,4) default 0 not null,
  ceppthef    decimal(8,4) default 0 not null,
  ceppphaf    decimal(8,4) default 0 not null,
  ceppicuf    decimal(8,4) default 0 not null,
  ceppallf    decimal(8,4) default 0 not null,
  ceppmssf    decimal(8,4) default 0 not null,
  cepptaxf    decimal(8,4) default 0 not null,
  ceppovhf    decimal(8,4) default 0 not null,
  ceppcatf    decimal(8,4) default 0 not null,
  ceppdepf    decimal(8,4) default 0 not null,
  ceppothf    decimal(8,4) default 0 not null,
  ceppnurv    decimal(8,4) default 0 not null,
  ceppthev    decimal(8,4) default 0 not null,
  ceppphav    decimal(8,4) default 0 not null,
  ceppicuv    decimal(8,4) default 0 not null,
  ceppallv    decimal(8,4) default 0 not null,
  ceppmssv    decimal(8,4) default 0 not null,
  cepptaxv    decimal(8,4) default 0 not null,
  ceppovhv    decimal(8,4) default 0 not null,
  ceppcatv    decimal(8,4) default 0 not null,
  ceppdepv    decimal(8,4) default 0 not null,
  ceppothv    decimal(8,4) default 0 not null,
  cepppro     decimal(8,4) default 0 not null,
  ceppicu     decimal(8,2) default 0 not null,
  ceppinci    decimal(1,0) default 0 not null,
  cepputh     decimal(1,0) default 0 not null,
  ceppb01     decimal(8,2) default 0 not null,
  ceppb02     decimal(8,2) default 0 not null,
  ceppb03     decimal(8,2) default 0 not null,
  ceppb04     decimal(8,2) default 0 not null,
  ceppb05     decimal(8,2) default 0 not null,
  ceppb06     decimal(8,2) default 0 not null,
  ceppb07     decimal(8,2) default 0 not null,
  ceppb08     decimal(8,2) default 0 not null,
  ceppb09     decimal(8,2) default 0 not null,
  ceppb10     decimal(8,2) default 0 not null,
  ceppb11     decimal(8,2) default 0 not null,
  ceppb12     decimal(8,2) default 0 not null,
  ceppb13     decimal(8,2) default 0 not null,
  ceppb14     decimal(8,2) default 0 not null,
  ceppb15     decimal(8,2) default 0 not null,
  ceppspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ceappma1 on ceappmaf
(
ceppind
);
revoke all on ceappmaf from public ; 
grant select on ceappmaf to public ; 
