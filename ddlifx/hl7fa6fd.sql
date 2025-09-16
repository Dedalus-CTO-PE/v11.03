create table hl7fa6af
(
  hla6rsid    char(64) default ' ' not null,
  hla6vrid    char(10) default ' ' not null,
  hla6cnt1    char(4) default ' ' not null,
  hla6cnt2    char(4) default ' ' not null,
  hla6cnt3    char(4) default ' ' not null,
  hla6ntim    char(40) default ' ' not null,
  hla6ntxt    char(300) default ' ' not null,
  hla6nstr    char(200) default ' ' not null,
  hla6nref    char(200) default ' ' not null,
  hla6ntyp    char(255) default ' ' not null,
  hla6ndis    char(255) default ' ' not null,
  hla6nidu    char(20) default ' ' not null,
  hla6nsys    char(255) default ' ' not null,
  hla6nivl    char(200) default ' ' not null,
  hla6nids    char(255) default ' ' not null,
  hla6nidv    char(50) default ' ' not null,
  hla6nidc    char(50) default ' ' not null,
  hla6nidd    char(200) default ' ' not null,
  hla6nius    char(10) default ' ' not null,
  hla6nidt    char(200) default ' ' not null,
  hla6nips    char(40) default ' ' not null,
  hla6nipe    char(40) default ' ' not null,
  hla6spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa6a1 on hl7fa6af
(
hla6rsid,
hla6vrid,
hla6cnt1,
hla6cnt2,
hla6cnt3
);
create unique index hl7fa6a2 on hl7fa6af
(
hla6cnt3,
hla6rsid,
hla6vrid,
hla6cnt1,
hla6cnt2
);
revoke all on hl7fa6af from public ; 
grant select on hl7fa6af to public ; 
