create table ccspsdaf
(
  ccpshcd     varchar2(2) default ' ' not null,
  ccpsdpt     varchar2(8) default ' ' not null,
  ccpsyear    varchar2(4) default ' ' not null,
  ccpsper     varchar2(2) default ' ' not null,
  ccpspcd     varchar2(8) default ' ' not null,
  ccpsqty     number(12,2) default 0 not null,
  ccpsbqt     number(12,2) default 0 not null,
  ccpscst     number(18,6) default 0 not null,
  ccpsbct     number(18,6) default 0 not null,
  ccpsfbu     number(18,6) default 0 not null,
  ccpssct     number(18,6) default 0 not null,
  ccpschg     number(14,2) default 0 not null,
  ccpsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspsda1 primary key( 
ccpshcd,
ccpsdpt,
ccpsyear,
ccpsper,
ccpspcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccspsda2 on ccspsdaf
(
ccpshcd,
ccpsdpt,
ccpspcd,
ccpsyear,
ccpsper
)
  tablespace pas_indx; 
create unique index ccspsda3 on ccspsdaf
(
ccpspcd,
ccpsyear,
ccpsper,
ccpshcd,
ccpsdpt
)
  tablespace pas_indx; 
