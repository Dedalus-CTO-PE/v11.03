create table hl7fa4af
(
  hla4rsid    char(64) default ' ' not null,
  hla4vrid    char(10) default ' ' not null,
  hla4cnt1    char(4) default ' ' not null,
  hla4cnt2    char(4) default ' ' not null,
  hla4cnt3    char(4) default ' ' not null,
  hla4rmtx    char(200) default ' ' not null,
  hla4rmsy    char(255) default ' ' not null,
  hla4rmvr    char(200) default ' ' not null,
  hla4rmcd    char(50) default ' ' not null,
  hla4rmdp    char(200) default ' ' not null,
  hla4rmus    char(10) default ' ' not null,
  hla4spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa4a1 on hl7fa4af
(
hla4rsid,
hla4vrid,
hla4cnt1,
hla4cnt2,
hla4cnt3
);
create unique index hl7fa4a2 on hl7fa4af
(
hla4cnt3,
hla4rsid,
hla4vrid,
hla4cnt1,
hla4cnt2
);
revoke all on hl7fa4af from public ; 
grant select on hl7fa4af to public ; 
