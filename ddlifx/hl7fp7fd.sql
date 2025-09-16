create table hl7fp7af
(
  hlp7rsid    char(64) default ' ' not null,
  hlp7vrid    char(10) default ' ' not null,
  hlp7cnt1    char(4) default ' ' not null,
  hlp7cnt2    char(4) default ' ' not null,
  hlp7nuse    char(50) default ' ' not null,
  hlp7ntex    char(200) default ' ' not null,
  hlp7nfam    char(200) default ' ' not null,
  hlp7ngv1    char(200) default ' ' not null,
  hlp7ngv2    char(200) default ' ' not null,
  hlp7ngv3    char(200) default ' ' not null,
  hlp7npr1    char(200) default ' ' not null,
  hlp7npr2    char(200) default ' ' not null,
  hlp7npr3    char(200) default ' ' not null,
  hlp7nsf1    char(200) default ' ' not null,
  hlp7nsf2    char(200) default ' ' not null,
  hlp7nsf3    char(200) default ' ' not null,
  hlp7pstr    char(40) default ' ' not null,
  hlp7pend    char(40) default ' ' not null,
  hlp7spar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7fp7a1 on hl7fp7af
(
hlp7rsid,
hlp7vrid,
hlp7cnt1,
hlp7cnt2
);
revoke all on hl7fp7af from public ; 
grant select on hl7fp7af to public ; 
