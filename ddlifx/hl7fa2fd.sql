create table hl7fa2af
(
  hla2rsid    char(64) default ' ' not null,
  hla2vrid    char(10) default ' ' not null,
  hla2cnt1    char(4) default ' ' not null,
  hla2ctg1    char(50) default ' ' not null,
  hla2ctg2    char(50) default ' ' not null,
  hla2ctg3    char(50) default ' ' not null,
  hla2ctg4    char(50) default ' ' not null,
  hla2crty    char(30) default ' ' not null,
  hla2cdtx    char(200) default ' ' not null,
  hla2cdur    char(255) default ' ' not null,
  hla2cdvr    char(200) default ' ' not null,
  hla2cdcd    char(50) default ' ' not null,
  hla2cdds    char(200) default ' ' not null,
  hla2cdus    char(10) default ' ' not null,
  hla2osdt    char(40) default ' ' not null,
  hla2osag    char(40) default ' ' not null,
  hla2osps    char(40) default ' ' not null,
  hla2ospe    char(40) default ' ' not null,
  hla2orlv    char(30) default ' ' not null,
  hla2orhv    char(30) default ' ' not null,
  hla2orlc    char(3) default ' ' not null,
  hla2orhc    char(3) default ' ' not null,
  hla2ostr    char(40) default ' ' not null,
  hla2rcdt    char(40) default ' ' not null,
  hla2lodt    char(40) default ' ' not null,
  hla2spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa2a1 on hl7fa2af
(
hla2rsid,
hla2vrid,
hla2cnt1
);
revoke all on hl7fa2af from public ; 
grant select on hl7fa2af to public ; 
