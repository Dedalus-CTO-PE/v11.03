create table fmsaudam
(
  fmamaudd    varchar2(8) default ' ' not null,
  fmamaudt    varchar2(8) default ' ' not null,
  fmamaudp    varchar2(2) default ' ' not null,
  fmamaudr    varchar2(1) default ' ' not null,
  fmamauds    number(1,0) default 0 not null,
  fmamaudo    varchar2(4) default ' ' not null,
  fmamledg    varchar2(2) default ' ' not null,
  fmamacct    varchar2(12) default ' ' not null,
  fmamdesc    varchar2(35) default ' ' not null,
  fmamsec     varchar2(3) default ' ' not null,
  fmamtype    varchar2(1) default ' ' not null,
  fmamref1    varchar2(25) default ' ' not null,
  fmamref2    varchar2(25) default ' ' not null,
  fmamref3    varchar2(25) default ' ' not null,
  fmamref4    varchar2(25) default ' ' not null,
  fmamdat1    varchar2(8) default ' ' not null,
  fmamdat2    varchar2(8) default ' ' not null,
  fmamdat3    varchar2(8) default ' ' not null,
  fmamdat4    varchar2(8) default ' ' not null,
  fmamcod1    varchar2(3) default ' ' not null,
  fmamcod2    varchar2(3) default ' ' not null,
  fmamcod3    varchar2(3) default ' ' not null,
  fmamcod4    varchar2(3) default ' ' not null,
  fmamamt1    number(18,6) default 0 not null,
  fmamamt2    number(18,6) default 0 not null,
  fmamamt3    number(18,6) default 0 not null,
  fmamamt4    number(18,6) default 0 not null,
  fmamstat    number(2,0) default 0 not null,
  fmamctrl    number(1,0) default 0 not null,
  fmamasst    number(1,0) default 0 not null,
  fmamppt     number(1,0) default 0 not null,
  fmamonc     number(1,0) default 0 not null,
  fmamoncc    varchar2(3) default ' ' not null,
  fmamcheq    varchar2(10) default ' ' not null,
  fmamobal    number(14,2) default 0 not null,
  fmambdat    varchar2(8) default ' ' not null,
  fmamdpla    varchar2(1) default ' ' not null,
  fmamunit    varchar2(20) default ' ' not null,
  fmamaytd    number(1,0) default 0 not null,
  fmammult    number(8,2) default 0 not null,
  fmamdiv     number(8,2) default 0 not null,
  fmamclev    varchar2(3) default ' ' not null,
  fmamdpro    varchar2(3) default ' ' not null,
  fmamspar    varchar2(27) default ' ' not null,
  fmamlock    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index fmsaudam on fmsaudam
(
fmamaudd,
fmamaudt,
fmamaudp,
fmamaudr
)
tablespace pas_indx; 
create table fmsamaaf
(
  fmamledg    varchar2(2) default ' ' not null,
  fmamacct    varchar2(12) default ' ' not null,
  fmamdesc    varchar2(35) default ' ' not null,
  fmamsec     varchar2(3) default ' ' not null,
  fmamtype    varchar2(1) default ' ' not null,
  fmamref1    varchar2(25) default ' ' not null,
  fmamref2    varchar2(25) default ' ' not null,
  fmamref3    varchar2(25) default ' ' not null,
  fmamref4    varchar2(25) default ' ' not null,
  fmamdat1    varchar2(8) default ' ' not null,
  fmamdat2    varchar2(8) default ' ' not null,
  fmamdat3    varchar2(8) default ' ' not null,
  fmamdat4    varchar2(8) default ' ' not null,
  fmamcod1    varchar2(3) default ' ' not null,
  fmamcod2    varchar2(3) default ' ' not null,
  fmamcod3    varchar2(3) default ' ' not null,
  fmamcod4    varchar2(3) default ' ' not null,
  fmamamt1    number(18,6) default 0 not null,
  fmamamt2    number(18,6) default 0 not null,
  fmamamt3    number(18,6) default 0 not null,
  fmamamt4    number(18,6) default 0 not null,
  fmamstat    number(2,0) default 0 not null,
  fmamctrl    number(1,0) default 0 not null,
  fmamasst    number(1,0) default 0 not null,
  fmamppt     number(1,0) default 0 not null,
  fmamonc     number(1,0) default 0 not null,
  fmamoncc    varchar2(3) default ' ' not null,
  fmamcheq    varchar2(10) default ' ' not null,
  fmamobal    number(14,2) default 0 not null,
  fmambdat    varchar2(8) default ' ' not null,
  fmamdpla    varchar2(1) default ' ' not null,
  fmamunit    varchar2(20) default ' ' not null,
  fmamaytd    number(1,0) default 0 not null,
  fmammult    number(8,2) default 0 not null,
  fmamdiv     number(8,2) default 0 not null,
  fmamclev    varchar2(3) default ' ' not null,
  fmamdpro    varchar2(3) default ' ' not null,
  fmamspar    varchar2(27) default ' ' not null,
  fmamlock    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsamaa1 primary key( 
fmamledg,
fmamacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsamaa2 on fmsamaaf
(
fmamledg,
fmamtype,
fmamacct
)
  tablespace pas_indx; 
create unique index fmsamaa3 on fmsamaaf
(
fmamledg,
fmamtype,
fmamdesc,
fmamacct
)
  tablespace pas_indx; 
create unique index fmsamaa4 on fmsamaaf
(
fmamtype,
fmamclev,
fmamledg,
fmamacct
)
  tablespace pas_indx; 
