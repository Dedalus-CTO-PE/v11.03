create table amslohaf
(
  amlhreg     char(2) default ' ' not null,
  amlhass     char(12) default ' ' not null,
  amlhdat     char(8) default ' ' not null,
  amlhfbld    char(3) default ' ' not null,
  amlhfloc    char(6) default ' ' not null,
  amlhtbld    char(3) default ' ' not null,
  amlhtloc    char(6) default ' ' not null,
  amlhcom     char(30) default ' ' not null,
  amlhua1     decimal(14,2) default 0 not null,
  amlhua2     decimal(14,2) default 0 not null,
  amlhur1     char(30) default ' ' not null,
  amlhur2     char(30) default ' ' not null,
  amlhuy1     char(1) default ' ' not null,
  amlhuy2     char(1) default ' ' not null,
  amlhspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsloha1 on amslohaf
(
amlhreg,
amlhass,
amlhdat
);
revoke all on amslohaf from public ; 
grant select on amslohaf to public ; 
