create table hl7fp4af
(
  hlp4rsid    char(64) default ' ' not null,
  hlp4vrid    char(10) default ' ' not null,
  hlp4cnt1    char(4) default ' ' not null,
  hlp4cnt2    char(4) default ' ' not null,
  hlp4refe    char(200) default ' ' not null,
  hlp4type    char(255) default ' ' not null,
  hlp4idus    char(20) default ' ' not null,
  hlp4idsy    char(255) default ' ' not null,
  hlp4idve    char(50) default ' ' not null,
  hlp4idcd    char(50) default ' ' not null,
  hlp4iddi    char(200) default ' ' not null,
  hlp4idsl    char(10) default ' ' not null,
  hlp4idtx    char(200) default ' ' not null,
  hlp4syst    char(255) default ' ' not null,
  hlp4idva    char(200) default ' ' not null,
  hlp4psta    char(40) default ' ' not null,
  hlp4pend    char(40) default ' ' not null,
  hlp4spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp4a1 on hl7fp4af
(
hlp4rsid,
hlp4vrid,
hlp4cnt1,
hlp4cnt2
);
create unique index hl7fp4a2 on hl7fp4af
(
hlp4idus,
hlp4rsid,
hlp4vrid,
hlp4cnt1,
hlp4cnt2
);
revoke all on hl7fp4af from public ; 
grant select on hl7fp4af to public ; 
