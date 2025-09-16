create table mrtresaf
(
  mrrskey     char(10) default ' ' not null,
  mrrsdate    char(8) default ' ' not null,
  mrrstime    char(5) default ' ' not null,
  mrrsdept    char(4) default ' ' not null,
  mrrsreqs    char(6) default ' ' not null,
  mrrsreas    char(4) default ' ' not null,
  mrrsresv    char(8) default ' ' not null,
  mrrsrhos    char(3) default ' ' not null,
  mrrsspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index mrtresa1 on mrtresaf
(
mrrskey,
mrrsdate,
mrrstime
);
create unique index mrtresa2 on mrtresaf
(
mrrsresv,
mrrsdate,
mrrstime,
mrrskey
);
revoke all on mrtresaf from public ; 
grant select on mrtresaf to public ; 
