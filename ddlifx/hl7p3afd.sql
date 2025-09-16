create table hl7p3aaf
(
  hl3arsid    char(64) default ' ' not null,
  hl3avrid    char(10) default ' ' not null,
  hl3acnt1    char(4) default ' ' not null,
  hl3acnt2    char(4) default ' ' not null,
  hl3aaref    char(200) default ' ' not null,
  hl3aatyp    char(255) default ' ' not null,
  hl3aadis    char(200) default ' ' not null,
  hl3aiuse    char(40) default ' ' not null,
  hl3aisys    char(255) default ' ' not null,
  hl3aival    char(200) default ' ' not null,
  hl3aitxt    char(200) default ' ' not null,
  hl3acsys    char(255) default ' ' not null,
  hl3acver    char(200) default ' ' not null,
  hl3accod    char(50) default ' ' not null,
  hl3acdis    char(200) default ' ' not null,
  hl3acuss    char(10) default ' ' not null,
  hl3apstr    char(40) default ' ' not null,
  hl3apend    char(40) default ' ' not null,
  hl3adisp    char(200) default ' ' not null,
  hl3aspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p3aa1 on hl7p3aaf
(
hl3arsid,
hl3avrid,
hl3acnt1,
hl3acnt2
);
revoke all on hl7p3aaf from public ; 
grant select on hl7p3aaf to public ; 
