create table hl7fa5af
(
  hla5rsid    char(64) default ' ' not null,
  hla5vrid    char(10) default ' ' not null,
  hla5cnt1    char(4) default ' ' not null,
  hla5cnt2    char(4) default ' ' not null,
  hla5ntim    char(40) default ' ' not null,
  hla5ntxt    char(300) default ' ' not null,
  hla5nstr    char(200) default ' ' not null,
  hla5nref    char(200) default ' ' not null,
  hla5ntyp    char(255) default ' ' not null,
  hla5ndis    char(255) default ' ' not null,
  hla5nidu    char(20) default ' ' not null,
  hla5nsys    char(255) default ' ' not null,
  hla5nivl    char(200) default ' ' not null,
  hla5nids    char(255) default ' ' not null,
  hla5nidv    char(50) default ' ' not null,
  hla5nidc    char(50) default ' ' not null,
  hla5nidd    char(200) default ' ' not null,
  hla5nius    char(10) default ' ' not null,
  hla5nidt    char(200) default ' ' not null,
  hla5nips    char(40) default ' ' not null,
  hla5nipe    char(40) default ' ' not null,
  hla5spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa5a1 on hl7fa5af
(
hla5rsid,
hla5vrid,
hla5cnt1,
hla5cnt2
);
create unique index hl7fa5a2 on hl7fa5af
(
hla5cnt2,
hla5rsid,
hla5vrid,
hla5cnt1
);
revoke all on hl7fa5af from public ; 
grant select on hl7fa5af to public ; 
