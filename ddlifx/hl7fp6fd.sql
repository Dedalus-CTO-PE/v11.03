create table hl7fp6af
(
  hlp6rsid    char(64) default ' ' not null,
  hlp6vrid    char(10) default ' ' not null,
  hlp6cnt1    char(4) default ' ' not null,
  hlp6cnt2    char(4) default ' ' not null,
  hlp6rtxt    char(200) default ' ' not null,
  hlp6rsys    char(255) default ' ' not null,
  hlp6rver    char(50) default ' ' not null,
  hlp6rcod    char(200) default ' ' not null,
  hlp6rdsp    char(200) default ' ' not null,
  hlp6ruse    char(10) default ' ' not null,
  hlp6rtx2    char(200) default ' ' not null,
  hlp6rsy2    char(255) default ' ' not null,
  hlp6rve2    char(50) default ' ' not null,
  hlp6rco2    char(200) default ' ' not null,
  hlp6rds2    char(200) default ' ' not null,
  hlp6rus2    char(10) default ' ' not null,
  hlp6nuse    char(50) default ' ' not null,
  hlp6ntxt    char(200) default ' ' not null,
  hlp6nfam    char(200) default ' ' not null,
  hlp6ngiv    char(200) default ' ' not null,
  hlp6npre    char(200) default ' ' not null,
  hlp6nsuf    char(200) default ' ' not null,
  hlp6nstr    char(40) default ' ' not null,
  hlp6nend    char(40) default ' ' not null,
  hlp6spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp6a1 on hl7fp6af
(
hlp6rsid,
hlp6vrid,
hlp6cnt1,
hlp6cnt2
);
revoke all on hl7fp6af from public ; 
grant select on hl7fp6af to public ; 
