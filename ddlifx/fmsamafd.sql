create table fmsaudam
(
  fmamaudd    char(8) default ' ' not null,
  fmamaudt    char(8) default ' ' not null,
  fmamaudp    char(2) default ' ' not null,
  fmamaudr    char(1) default ' ' not null,
  fmamauds    decimal(1,0) default 0 not null,
  fmamaudo    char(4) default ' ' not null,
  fmamledg    char(2) default ' ' not null,
  fmamacct    char(12) default ' ' not null,
  fmamdesc    char(35) default ' ' not null,
  fmamsec     char(3) default ' ' not null,
  fmamtype    char(1) default ' ' not null,
  fmamref1    char(25) default ' ' not null,
  fmamref2    char(25) default ' ' not null,
  fmamref3    char(25) default ' ' not null,
  fmamref4    char(25) default ' ' not null,
  fmamdat1    char(8) default ' ' not null,
  fmamdat2    char(8) default ' ' not null,
  fmamdat3    char(8) default ' ' not null,
  fmamdat4    char(8) default ' ' not null,
  fmamcod1    char(3) default ' ' not null,
  fmamcod2    char(3) default ' ' not null,
  fmamcod3    char(3) default ' ' not null,
  fmamcod4    char(3) default ' ' not null,
  fmamamt1    decimal(18,6) default 0 not null,
  fmamamt2    decimal(18,6) default 0 not null,
  fmamamt3    decimal(18,6) default 0 not null,
  fmamamt4    decimal(18,6) default 0 not null,
  fmamstat    decimal(2,0) default 0 not null,
  fmamctrl    decimal(1,0) default 0 not null,
  fmamasst    decimal(1,0) default 0 not null,
  fmamppt     decimal(1,0) default 0 not null,
  fmamonc     decimal(1,0) default 0 not null,
  fmamoncc    char(3) default ' ' not null,
  fmamcheq    char(10) default ' ' not null,
  fmamobal    decimal(14,2) default 0 not null,
  fmambdat    char(8) default ' ' not null,
  fmamdpla    char(1) default ' ' not null,
  fmamunit    char(20) default ' ' not null,
  fmamaytd    decimal(1,0) default 0 not null,
  fmammult    decimal(8,2) default 0 not null,
  fmamdiv     decimal(8,2) default 0 not null,
  fmamclev    char(3) default ' ' not null,
  fmamdpro    char(3) default ' ' not null,
  fmamspar    char(27) default ' ' not null,
  fmamlock    char(2) default ' ' not null,
  lf          char(1)
);
create index fmsaudam on fmsaudam
(
fmamaudd,
fmamaudt,
fmamaudp,
fmamaudr
);
revoke all on fmsaudam from public ; 
grant select on fmsaudam to public ; 
create table fmsamaaf
(
  fmamledg    char(2) default ' ' not null,
  fmamacct    char(12) default ' ' not null,
  fmamdesc    char(35) default ' ' not null,
  fmamsec     char(3) default ' ' not null,
  fmamtype    char(1) default ' ' not null,
  fmamref1    char(25) default ' ' not null,
  fmamref2    char(25) default ' ' not null,
  fmamref3    char(25) default ' ' not null,
  fmamref4    char(25) default ' ' not null,
  fmamdat1    char(8) default ' ' not null,
  fmamdat2    char(8) default ' ' not null,
  fmamdat3    char(8) default ' ' not null,
  fmamdat4    char(8) default ' ' not null,
  fmamcod1    char(3) default ' ' not null,
  fmamcod2    char(3) default ' ' not null,
  fmamcod3    char(3) default ' ' not null,
  fmamcod4    char(3) default ' ' not null,
  fmamamt1    decimal(18,6) default 0 not null,
  fmamamt2    decimal(18,6) default 0 not null,
  fmamamt3    decimal(18,6) default 0 not null,
  fmamamt4    decimal(18,6) default 0 not null,
  fmamstat    decimal(2,0) default 0 not null,
  fmamctrl    decimal(1,0) default 0 not null,
  fmamasst    decimal(1,0) default 0 not null,
  fmamppt     decimal(1,0) default 0 not null,
  fmamonc     decimal(1,0) default 0 not null,
  fmamoncc    char(3) default ' ' not null,
  fmamcheq    char(10) default ' ' not null,
  fmamobal    decimal(14,2) default 0 not null,
  fmambdat    char(8) default ' ' not null,
  fmamdpla    char(1) default ' ' not null,
  fmamunit    char(20) default ' ' not null,
  fmamaytd    decimal(1,0) default 0 not null,
  fmammult    decimal(8,2) default 0 not null,
  fmamdiv     decimal(8,2) default 0 not null,
  fmamclev    char(3) default ' ' not null,
  fmamdpro    char(3) default ' ' not null,
  fmamspar    char(27) default ' ' not null,
  fmamlock    char(2) default ' ' not null,
  lf          char(1)
);
create unique index fmsamaa1 on fmsamaaf
(
fmamledg,
fmamacct
);
create unique index fmsamaa2 on fmsamaaf
(
fmamledg,
fmamtype,
fmamacct
);
create unique index fmsamaa3 on fmsamaaf
(
fmamledg,
fmamtype,
fmamdesc,
fmamacct
);
create unique index fmsamaa4 on fmsamaaf
(
fmamtype,
fmamclev,
fmamledg,
fmamacct
);
revoke all on fmsamaaf from public ; 
grant select on fmsamaaf to public ; 
