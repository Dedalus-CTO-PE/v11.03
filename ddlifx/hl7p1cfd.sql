create table hl7p1caf
(
  hl1crsid    char(64) default ' ' not null,
  hl1cvrid    char(10) default ' ' not null,
  hl1ccnt1    char(4) default ' ' not null,
  hl1cmair    char(200) default ' ' not null,
  hl1cmait    char(255) default ' ' not null,
  hl1cmaid    char(200) default ' ' not null,
  hl1cmaiu    char(50) default ' ' not null,
  hl1cmais    char(255) default ' ' not null,
  hl1cmaiv    char(200) default ' ' not null,
  hl1cmitx    char(200) default ' ' not null,
  hl1cmisy    char(255) default ' ' not null,
  hl1cmive    char(200) default ' ' not null,
  hl1cmicd    char(50) default ' ' not null,
  hl1cmidi    char(200) default ' ' not null,
  hl1cmius    char(10) default ' ' not null,
  hl1cmips    char(40) default ' ' not null,
  hl1cmipe    char(40) default ' ' not null,
  hl1cspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p1ca1 on hl7p1caf
(
hl1crsid,
hl1cvrid,
hl1ccnt1
);
revoke all on hl7p1caf from public ; 
grant select on hl7p1caf to public ; 
