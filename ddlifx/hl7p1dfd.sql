create table hl7p1daf
(
  hl1drsid    char(64) default ' ' not null,
  hl1dvrid    char(10) default ' ' not null,
  hl1dcnt1    char(4) default ' ' not null,
  hl1dcnt2    char(4) default ' ' not null,
  hl1dcprf    char(10) default ' ' not null,
  hl1dctxt    char(200) default ' ' not null,
  hl1dcsys    char(255) default ' ' not null,
  hl1dcver    char(200) default ' ' not null,
  hl1dccod    char(50) default ' ' not null,
  hl1dcdis    char(200) default ' ' not null,
  hl1dcusl    char(10) default ' ' not null,
  hl1dcsy2    char(255) default ' ' not null,
  hl1dcve2    char(200) default ' ' not null,
  hl1dcco2    char(50) default ' ' not null,
  hl1dcdi2    char(200) default ' ' not null,
  hl1dcus2    char(10) default ' ' not null,
  hl1dcsy3    char(255) default ' ' not null,
  hl1dcve3    char(200) default ' ' not null,
  hl1dcco3    char(50) default ' ' not null,
  hl1dcdi3    char(200) default ' ' not null,
  hl1dcus3    char(10) default ' ' not null,
  hl1dspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p1da1 on hl7p1daf
(
hl1drsid,
hl1dvrid,
hl1dcnt1,
hl1dcnt2
);
revoke all on hl7p1daf from public ; 
grant select on hl7p1daf to public ; 
