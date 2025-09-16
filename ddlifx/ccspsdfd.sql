create table ccspsdaf
(
  ccpshcd     char(2) default ' ' not null,
  ccpsdpt     char(8) default ' ' not null,
  ccpsyear    char(4) default ' ' not null,
  ccpsper     char(2) default ' ' not null,
  ccpspcd     char(8) default ' ' not null,
  ccpsqty     decimal(12,2) default 0 not null,
  ccpsbqt     decimal(12,2) default 0 not null,
  ccpscst     decimal(18,6) default 0 not null,
  ccpsbct     decimal(18,6) default 0 not null,
  ccpsfbu     decimal(18,6) default 0 not null,
  ccpssct     decimal(18,6) default 0 not null,
  ccpschg     decimal(14,2) default 0 not null,
  ccpsspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ccspsda1 on ccspsdaf
(
ccpshcd,
ccpsdpt,
ccpsyear,
ccpsper,
ccpspcd
);
create unique index ccspsda2 on ccspsdaf
(
ccpshcd,
ccpsdpt,
ccpspcd,
ccpsyear,
ccpsper
);
create unique index ccspsda3 on ccspsdaf
(
ccpspcd,
ccpsyear,
ccpsper,
ccpshcd,
ccpsdpt
);
revoke all on ccspsdaf from public ; 
grant select on ccspsdaf to public ; 
