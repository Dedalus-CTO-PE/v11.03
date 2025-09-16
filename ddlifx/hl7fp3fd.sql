create table hl7fp3af
(
  hlp3rsid    char(64) default ' ' not null,
  hlp3vrid    char(10) default ' ' not null,
  hlp3cnt1    char(4) default ' ' not null,
  hlp3cnt2    char(4) default ' ' not null,
  hlp3refe    char(200) default ' ' not null,
  hlp3type    char(255) default ' ' not null,
  hlp3idus    char(20) default ' ' not null,
  hlp3idsy    char(255) default ' ' not null,
  hlp3idve    char(50) default ' ' not null,
  hlp3idcd    char(50) default ' ' not null,
  hlp3iddi    char(200) default ' ' not null,
  hlp3idsl    char(10) default ' ' not null,
  hlp3idtx    char(200) default ' ' not null,
  hlp3syst    char(255) default ' ' not null,
  hlp3idva    char(200) default ' ' not null,
  hlp3psta    char(40) default ' ' not null,
  hlp3pend    char(40) default ' ' not null,
  hlp3spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp3a1 on hl7fp3af
(
hlp3rsid,
hlp3vrid,
hlp3cnt1,
hlp3cnt2
);
create unique index hl7fp3a2 on hl7fp3af
(
hlp3idus,
hlp3rsid,
hlp3vrid,
hlp3cnt1,
hlp3cnt2
);
revoke all on hl7fp3af from public ; 
grant select on hl7fp3af to public ; 
