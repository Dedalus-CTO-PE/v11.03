create table aaegicaf
(
  aeiccode    char(4) default ' ' not null,
  aeicdesc    char(20) default ' ' not null,
  aeicsuba    char(1) default ' ' not null,
  aeicspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index aaegica1 on aaegicaf
(
aeiccode
);
revoke all on aaegicaf from public ; 
grant select on aaegicaf to public ; 
