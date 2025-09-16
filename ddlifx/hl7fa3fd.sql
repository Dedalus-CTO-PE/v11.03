create table hl7fa3af
(
  hla3rsid    char(64) default ' ' not null,
  hla3vrid    char(10) default ' ' not null,
  hla3cnt1    char(4) default ' ' not null,
  hla3cnt2    char(4) default ' ' not null,
  hla3rstx    char(200) default ' ' not null,
  hla3rssy    char(255) default ' ' not null,
  hla3rsve    char(50) default ' ' not null,
  hla3rscd    char(50) default ' ' not null,
  hla3rsdi    char(200) default ' ' not null,
  hla3rssl    char(10) default ' ' not null,
  hla3rdes    char(200) default ' ' not null,
  hla3rost    char(40) default ' ' not null,
  hla3rsvy    char(10) default ' ' not null,
  hla3retx    char(200) default ' ' not null,
  hla3resy    char(255) default ' ' not null,
  hla3reve    char(50) default ' ' not null,
  hla3recd    char(50) default ' ' not null,
  hla3redi    char(200) default ' ' not null,
  hla3resl    char(10) default ' ' not null,
  hla3spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fa3a1 on hl7fa3af
(
hla3rsid,
hla3vrid,
hla3cnt1
);
revoke all on hl7fa3af from public ; 
grant select on hl7fa3af to public ; 
