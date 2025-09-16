create table mehaudl1
(
  mhdlaudd    varchar2(8) default ' ' not null,
  mhdlaudt    varchar2(8) default ' ' not null,
  mhdlaudp    varchar2(2) default ' ' not null,
  mhdlaudr    varchar2(1) default ' ' not null,
  mhdlauds    number(1,0) default 0 not null,
  mhdlaudo    varchar2(4) default ' ' not null,
  dmhdladm    varchar2(8) default ' ' not null,
  mhdldate    varchar2(8) default ' ' not null,
  mhdltime    varchar2(8) default ' ' not null,
  mhdladd1    varchar2(35) default ' ' not null,
  mhdladd2    varchar2(35) default ' ' not null,
  mhdlsubr    varchar2(35) default ' ' not null,
  mhdladd4    varchar2(35) default ' ' not null,
  mhdlpost    varchar2(8) default ' ' not null,
  mhdlspr1    varchar2(4) default ' ' not null,
  mhdlacty    varchar2(3) default ' ' not null,
  mhdlreft    varchar2(3) default ' ' not null,
  mhdlstay    varchar2(3) default ' ' not null,
  mhdlldom    number(1,0) default 0 not null,
  mhdllgp     number(1,0) default 0 not null,
  mhdltrst    number(1,0) default 0 not null,
  mhdldohn    number(1,0) default 0 not null,
  mhdloutp    number(1,0) default 0 not null,
  mhdlcsrg    number(1,0) default 0 not null,
  mhdlcsdt    varchar2(8) default ' ' not null,
  mhdlcfut    varchar2(3) default ' ' not null,
  mhdlcfud    varchar2(8) default ' ' not null,
  mhdlusr1    varchar2(3) default ' ' not null,
  mhdlusr2    varchar2(3) default ' ' not null,
  mhdlusr3    varchar2(3) default ' ' not null,
  mhdlusr4    varchar2(3) default ' ' not null,
  mhdlusr5    varchar2(3) default ' ' not null,
  mhdlxcor    varchar2(20) default ' ' not null,
  mhdlspar    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index mehaudl1 on mehaudl1
(
mhdlaudd,
mhdlaudt,
mhdlaudp,
mhdlaudr
)
tablespace pas_indx; 
create table mehdl1af
(
  dmhdladm    varchar2(8) default ' ' not null,
  mhdldate    varchar2(8) default ' ' not null,
  mhdltime    varchar2(8) default ' ' not null,
  mhdladd1    varchar2(35) default ' ' not null,
  mhdladd2    varchar2(35) default ' ' not null,
  mhdlsubr    varchar2(35) default ' ' not null,
  mhdladd4    varchar2(35) default ' ' not null,
  mhdlpost    varchar2(8) default ' ' not null,
  mhdlspr1    varchar2(4) default ' ' not null,
  mhdlacty    varchar2(3) default ' ' not null,
  mhdlreft    varchar2(3) default ' ' not null,
  mhdlstay    varchar2(3) default ' ' not null,
  mhdlldom    number(1,0) default 0 not null,
  mhdllgp     number(1,0) default 0 not null,
  mhdltrst    number(1,0) default 0 not null,
  mhdldohn    number(1,0) default 0 not null,
  mhdloutp    number(1,0) default 0 not null,
  mhdlcsrg    number(1,0) default 0 not null,
  mhdlcsdt    varchar2(8) default ' ' not null,
  mhdlcfut    varchar2(3) default ' ' not null,
  mhdlcfud    varchar2(8) default ' ' not null,
  mhdlusr1    varchar2(3) default ' ' not null,
  mhdlusr2    varchar2(3) default ' ' not null,
  mhdlusr3    varchar2(3) default ' ' not null,
  mhdlusr4    varchar2(3) default ' ' not null,
  mhdlusr5    varchar2(3) default ' ' not null,
  mhdlxcor    varchar2(20) default ' ' not null,
  mhdlspar    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehdl1a1 primary key( 
dmhdladm,
mhdldate,
mhdltime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
