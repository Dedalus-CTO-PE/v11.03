create table ccsppyaf
(
  ccpppid     char(8) default ' ' not null,
  ccppdes     char(35) default ' ' not null,
  ccppeid     char(4) default ' ' not null,
  ccpptim     char(1) default ' ' not null,
  ccppare     char(1) default ' ' not null,
  ccppct1     char(3) default ' ' not null,
  ccppct2     char(3) default ' ' not null,
  ccppct3     char(3) default ' ' not null,
  ccppdn1     char(35) default ' ' not null,
  ccppdn2     char(35) default ' ' not null,
  ccppdn3     char(35) default ' ' not null,
  ccppdn4     char(35) default ' ' not null,
  ccppdn5     char(35) default ' ' not null,
  ccppeps     decimal(1,0) default 0 not null,
  ccppne      decimal(1,0) default 0 not null,
  ccppbd      decimal(1,0) default 0 not null,
  ccppc1      decimal(1,0) default 0 not null,
  ccppc2      decimal(1,0) default 0 not null,
  ccppacc     decimal(1,0) default 0 not null,
  ccppthe     decimal(1,0) default 0 not null,
  ccppoth     decimal(1,0) default 0 not null,
  ccppalos    decimal(1,0) default 0 not null,
  ccppac1     decimal(1,0) default 0 not null,
  ccppac2     decimal(1,0) default 0 not null,
  ccppaacc    decimal(1,0) default 0 not null,
  ccppathe    decimal(1,0) default 0 not null,
  ccppaoth    decimal(1,0) default 0 not null,
  ccppbc1     decimal(1,0) default 0 not null,
  ccppbc2     decimal(1,0) default 0 not null,
  ccppbacc    decimal(1,0) default 0 not null,
  ccppbthe    decimal(1,0) default 0 not null,
  ccppboth    decimal(1,0) default 0 not null,
  ccppspa1    char(80) default ' ' not null,
  ccppspa2    char(80) default ' ' not null,
  lf          char(1)
);
create unique index ccsppya1 on ccsppyaf
(
ccpppid
);
revoke all on ccsppyaf from public ; 
grant select on ccsppyaf to public ; 
