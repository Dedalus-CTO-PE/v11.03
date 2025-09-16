create table hl7p4aaf
(
  hl4arsid    char(64) default ' ' not null,
  hl4avrid    char(10) default ' ' not null,
  hl4acnt1    char(4) default ' ' not null,
  hl4acnt2    char(4) default ' ' not null,
  hl4aaref    char(200) default ' ' not null,
  hl4aatyp    char(255) default ' ' not null,
  hl4aadis    char(200) default ' ' not null,
  hl4aiuse    char(40) default ' ' not null,
  hl4aisys    char(255) default ' ' not null,
  hl4aival    char(200) default ' ' not null,
  hl4aitxt    char(200) default ' ' not null,
  hl4acsys    char(255) default ' ' not null,
  hl4acver    char(200) default ' ' not null,
  hl4accod    char(50) default ' ' not null,
  hl4acdis    char(200) default ' ' not null,
  hl4acuss    char(19) default ' ' not null,
  hl4apstr    char(40) default ' ' not null,
  hl4apren    char(40) default ' ' not null,
  hl4adisp    char(200) default ' ' not null,
  hl4alnty    char(50) default ' ' not null,
  hl4aspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p4aa1 on hl7p4aaf
(
hl4arsid,
hl4avrid,
hl4acnt1,
hl4acnt2
);
revoke all on hl7p4aaf from public ; 
grant select on hl7p4aaf to public ; 
