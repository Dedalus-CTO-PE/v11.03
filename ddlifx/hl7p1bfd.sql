create table hl7p1baf
(
  hl1brsid    char(64) default ' ' not null,
  hl1bvrid    char(10) default ' ' not null,
  hl1bcnt1    char(4) default ' ' not null,
  hl1bmore    char(200) default ' ' not null,
  hl1bmoty    char(255) default ' ' not null,
  hl1bmodi    char(200) default ' ' not null,
  hl1bmous    char(50) default ' ' not null,
  hl1bmosy    char(255) default ' ' not null,
  hl1bmova    char(200) default ' ' not null,
  hl1bmotx    char(200) default ' ' not null,
  hl1bmots    char(255) default ' ' not null,
  hl1bmotv    char(200) default ' ' not null,
  hl1bmotc    char(50) default ' ' not null,
  hl1bmotd    char(200) default ' ' not null,
  hl1bmotu    char(10) default ' ' not null,
  hl1bmops    char(40) default ' ' not null,
  hl1bmope    char(40) default ' ' not null,
  hl1bspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7p1ba1 on hl7p1baf
(
hl1brsid,
hl1bvrid,
hl1bcnt1
);
revoke all on hl7p1baf from public ; 
grant select on hl7p1baf to public ; 
