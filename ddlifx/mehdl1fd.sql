create table mehaudl1
(
  mhdlaudd    char(8) default ' ' not null,
  mhdlaudt    char(8) default ' ' not null,
  mhdlaudp    char(2) default ' ' not null,
  mhdlaudr    char(1) default ' ' not null,
  mhdlauds    decimal(1,0) default 0 not null,
  mhdlaudo    char(4) default ' ' not null,
  dmhdladm    char(8) default ' ' not null,
  mhdldate    char(8) default ' ' not null,
  mhdltime    char(8) default ' ' not null,
  mhdladd1    char(35) default ' ' not null,
  mhdladd2    char(35) default ' ' not null,
  mhdlsubr    char(35) default ' ' not null,
  mhdladd4    char(35) default ' ' not null,
  mhdlpost    char(8) default ' ' not null,
  mhdlspr1    char(4) default ' ' not null,
  mhdlacty    char(3) default ' ' not null,
  mhdlreft    char(3) default ' ' not null,
  mhdlstay    char(3) default ' ' not null,
  mhdlldom    decimal(1,0) default 0 not null,
  mhdllgp     decimal(1,0) default 0 not null,
  mhdltrst    decimal(1,0) default 0 not null,
  mhdldohn    decimal(1,0) default 0 not null,
  mhdloutp    decimal(1,0) default 0 not null,
  mhdlcsrg    decimal(1,0) default 0 not null,
  mhdlcsdt    char(8) default ' ' not null,
  mhdlcfut    char(3) default ' ' not null,
  mhdlcfud    char(8) default ' ' not null,
  mhdlusr1    char(3) default ' ' not null,
  mhdlusr2    char(3) default ' ' not null,
  mhdlusr3    char(3) default ' ' not null,
  mhdlusr4    char(3) default ' ' not null,
  mhdlusr5    char(3) default ' ' not null,
  mhdlxcor    char(20) default ' ' not null,
  mhdlspar    char(1) default ' ' not null,
  lf          char(1)
);
create index mehaudl1 on mehaudl1
(
mhdlaudd,
mhdlaudt,
mhdlaudp,
mhdlaudr
);
revoke all on mehaudl1 from public ; 
grant select on mehaudl1 to public ; 
create table mehdl1af
(
  dmhdladm    char(8) default ' ' not null,
  mhdldate    char(8) default ' ' not null,
  mhdltime    char(8) default ' ' not null,
  mhdladd1    char(35) default ' ' not null,
  mhdladd2    char(35) default ' ' not null,
  mhdlsubr    char(35) default ' ' not null,
  mhdladd4    char(35) default ' ' not null,
  mhdlpost    char(8) default ' ' not null,
  mhdlspr1    char(4) default ' ' not null,
  mhdlacty    char(3) default ' ' not null,
  mhdlreft    char(3) default ' ' not null,
  mhdlstay    char(3) default ' ' not null,
  mhdlldom    decimal(1,0) default 0 not null,
  mhdllgp     decimal(1,0) default 0 not null,
  mhdltrst    decimal(1,0) default 0 not null,
  mhdldohn    decimal(1,0) default 0 not null,
  mhdloutp    decimal(1,0) default 0 not null,
  mhdlcsrg    decimal(1,0) default 0 not null,
  mhdlcsdt    char(8) default ' ' not null,
  mhdlcfut    char(3) default ' ' not null,
  mhdlcfud    char(8) default ' ' not null,
  mhdlusr1    char(3) default ' ' not null,
  mhdlusr2    char(3) default ' ' not null,
  mhdlusr3    char(3) default ' ' not null,
  mhdlusr4    char(3) default ' ' not null,
  mhdlusr5    char(3) default ' ' not null,
  mhdlxcor    char(20) default ' ' not null,
  mhdlspar    char(1) default ' ' not null,
  lf          char(1)
);
create unique index mehdl1a1 on mehdl1af
(
dmhdladm,
mhdldate,
mhdltime
);
revoke all on mehdl1af from public ; 
grant select on mehdl1af to public ; 
