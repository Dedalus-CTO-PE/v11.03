create table pmsprbaf
(
  pmpburno    char(8) default ' ' not null,
  pmpbpnum    char(5) default ' ' not null,
  pmpbspin    char(1) default ' ' not null,
  pmpbppno    char(5) default ' ' not null,
  pmpbprid    char(3) default ' ' not null,
  pmpbprty    char(3) default ' ' not null,
  pmpbactv    char(1) default ' ' not null,
  pmpbprst    char(3) default ' ' not null,
  pmpbdsc1    char(50) default ' ' not null,
  pmpbdsc2    char(50) default ' ' not null,
  pmpbdcsy    char(5) default ' ' not null,
  pmpbdcod    char(10) default ' ' not null,
  pmpbesdt    char(8) default ' ' not null,
  pmpbesti    char(5) default ' ' not null,
  pmpbesby    char(10) default ' ' not null,
  pmpberdt    char(8) default ' ' not null,
  pmpberti    char(5) default ' ' not null,
  pmpbardt    char(8) default ' ' not null,
  pmpbarti    char(5) default ' ' not null,
  pmpbrvst    char(3) default ' ' not null,
  pmpbnrdt    char(8) default ' ' not null,
  pmpbnrti    char(5) default ' ' not null,
  pmpbudc1    char(3) default ' ' not null,
  pmpbudc2    char(3) default ' ' not null,
  pmpbudy1    char(1) default ' ' not null,
  pmpbudy2    char(1) default ' ' not null,
  pmpbudd1    char(8) default ' ' not null,
  pmpbudd2    char(8) default ' ' not null,
  pmpbudt1    char(5) default ' ' not null,
  pmpbudt2    char(5) default ' ' not null,
  pmpblvis    char(8) default ' ' not null,
  pmpbspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index pmsprba1 on pmsprbaf
(
pmpburno,
pmpbpnum
);
create unique index pmsprba2 on pmsprbaf
(
pmpbnrdt,
pmpburno,
pmpbpnum
);
create unique index pmsprba3 on pmsprbaf
(
pmpblvis,
pmpburno,
pmpbpnum
);
revoke all on pmsprbaf from public ; 
grant select on pmsprbaf to public ; 
