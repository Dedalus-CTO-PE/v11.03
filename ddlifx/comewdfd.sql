create table comewdaf
(
  cmewdstr    char(3) default ' ' not null,
  cmewcntn    char(8) default ' ' not null,
  cmewobjt    char(3) default ' ' not null,
  cmewokey    char(90) default ' ' not null,
  cmewtext    char(900) default ' ' not null,
  cmewsdat    char(8) default ' ' not null,
  cmewrtyp    char(1) default ' ' not null,
  cmewscdt    char(8) default ' ' not null,
  cmewsctm    char(8) default ' ' not null,
  cmewmddt    char(8) default ' ' not null,
  cmewmdtm    char(8) default ' ' not null,
  cmewspar    char(60) default ' ' not null,
  lf          char(1)
);
create unique index comewda1 on comewdaf
(
cmewdstr,
cmewcntn,
cmewobjt,
cmewokey
);
create unique index comewda2 on comewdaf
(
cmewdstr,
cmewobjt,
cmewokey,
cmewsdat,
cmewcntn
);
revoke all on comewdaf from public ; 
grant select on comewdaf to public ; 
