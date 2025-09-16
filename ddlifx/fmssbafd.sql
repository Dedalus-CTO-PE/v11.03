create table fmsaudsa
(
  fmsaaudd    char(8) default ' ' not null,
  fmsaaudt    char(8) default ' ' not null,
  fmsaaudp    char(2) default ' ' not null,
  fmsaaudr    char(1) default ' ' not null,
  fmsaauds    decimal(1,0) default 0 not null,
  fmsaaudo    char(4) default ' ' not null,
  fmsaledg    char(2) default ' ' not null,
  fmsasubj    char(12) default ' ' not null,
  fmsadesc    char(35) default ' ' not null,
  fmsacgrp    char(5) default ' ' not null,
  fmsaades    char(35) default ' ' not null,
  fmsappos    char(5) default ' ' not null,
  fmsatype    char(1) default ' ' not null,
  fmsastyp    char(1) default ' ' not null,
  fmsadtyp    char(1) default ' ' not null,
  fmsasec     char(1) default ' ' not null,
  fmsaref1    char(25) default ' ' not null,
  fmsaref2    char(25) default ' ' not null,
  fmsaref3    char(25) default ' ' not null,
  fmsaref4    char(25) default ' ' not null,
  fmsadat1    char(8) default ' ' not null,
  fmsadat2    char(8) default ' ' not null,
  fmsadat3    char(8) default ' ' not null,
  fmsadat4    char(8) default ' ' not null,
  fmsacod1    char(3) default ' ' not null,
  fmsacod2    char(3) default ' ' not null,
  fmsacod3    char(3) default ' ' not null,
  fmsacod4    char(3) default ' ' not null,
  fmsaamt1    decimal(18,6) default 0 not null,
  fmsaamt2    decimal(18,6) default 0 not null,
  fmsaamt3    decimal(18,6) default 0 not null,
  fmsaamt4    decimal(18,6) default 0 not null,
  fmsastat    decimal(2,0) default 0 not null,
  fmsactrl    decimal(1,0) default 0 not null,
  fmsaasst    decimal(1,0) default 0 not null,
  fmsappt     decimal(1,0) default 0 not null,
  fmsaonc     decimal(1,0) default 0 not null,
  fmsaoncc    char(3) default ' ' not null,
  fmsacheq    char(10) default ' ' not null,
  fmsaaddt    char(12) default ' ' not null,
  fmsadpla    char(1) default ' ' not null,
  fmsaunit    char(20) default ' ' not null,
  fmsaaytd    decimal(1,0) default 0 not null,
  fmsamult    decimal(8,2) default 0 not null,
  fmsadiv     decimal(8,2) default 0 not null,
  fmsabln     char(12) default ' ' not null,
  fmsadlev    char(3) default ' ' not null,
  fmsaspar    char(17) default ' ' not null,
  fmsalock    char(2) default ' ' not null,
  lf          char(1)
);
create index fmsaudsa on fmsaudsa
(
fmsaaudd,
fmsaaudt,
fmsaaudp,
fmsaaudr
);
revoke all on fmsaudsa from public ; 
grant select on fmsaudsa to public ; 
create table fmssbaaf
(
  fmsaledg    char(2) default ' ' not null,
  fmsasubj    char(12) default ' ' not null,
  fmsadesc    char(35) default ' ' not null,
  fmsacgrp    char(5) default ' ' not null,
  fmsaades    char(35) default ' ' not null,
  fmsappos    char(5) default ' ' not null,
  fmsatype    char(1) default ' ' not null,
  fmsastyp    char(1) default ' ' not null,
  fmsadtyp    char(1) default ' ' not null,
  fmsasec     char(1) default ' ' not null,
  fmsaref1    char(25) default ' ' not null,
  fmsaref2    char(25) default ' ' not null,
  fmsaref3    char(25) default ' ' not null,
  fmsaref4    char(25) default ' ' not null,
  fmsadat1    char(8) default ' ' not null,
  fmsadat2    char(8) default ' ' not null,
  fmsadat3    char(8) default ' ' not null,
  fmsadat4    char(8) default ' ' not null,
  fmsacod1    char(3) default ' ' not null,
  fmsacod2    char(3) default ' ' not null,
  fmsacod3    char(3) default ' ' not null,
  fmsacod4    char(3) default ' ' not null,
  fmsaamt1    decimal(18,6) default 0 not null,
  fmsaamt2    decimal(18,6) default 0 not null,
  fmsaamt3    decimal(18,6) default 0 not null,
  fmsaamt4    decimal(18,6) default 0 not null,
  fmsastat    decimal(2,0) default 0 not null,
  fmsactrl    decimal(1,0) default 0 not null,
  fmsaasst    decimal(1,0) default 0 not null,
  fmsappt     decimal(1,0) default 0 not null,
  fmsaonc     decimal(1,0) default 0 not null,
  fmsaoncc    char(3) default ' ' not null,
  fmsacheq    char(10) default ' ' not null,
  fmsaaddt    char(12) default ' ' not null,
  fmsadpla    char(1) default ' ' not null,
  fmsaunit    char(20) default ' ' not null,
  fmsaaytd    decimal(1,0) default 0 not null,
  fmsamult    decimal(8,2) default 0 not null,
  fmsadiv     decimal(8,2) default 0 not null,
  fmsabln     char(12) default ' ' not null,
  fmsadlev    char(3) default ' ' not null,
  fmsaspar    char(17) default ' ' not null,
  fmsalock    char(2) default ' ' not null,
  lf          char(1)
);
create unique index fmssbaa1 on fmssbaaf
(
fmsaledg,
fmsasubj
);
create unique index fmssbaa2 on fmssbaaf
(
fmsaledg,
fmsadesc,
fmsasubj
);
revoke all on fmssbaaf from public ; 
grant select on fmssbaaf to public ; 
