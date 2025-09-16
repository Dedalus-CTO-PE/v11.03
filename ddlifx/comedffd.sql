create table comedfaf
(
  cmefdstr    char(3) default ' ' not null,
  cmefcntn    char(8) default ' ' not null,
  cmefobjt    char(3) default ' ' not null,
  cmeffnam    char(100) default ' ' not null,
  cmefmd5c    char(100) default ' ' not null,
  cmefcntr    char(8) default ' ' not null,
  cmefspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index comedfa1 on comedfaf
(
cmefdstr,
cmefcntn,
cmefobjt
);
revoke all on comedfaf from public ; 
grant select on comedfaf to public ; 
