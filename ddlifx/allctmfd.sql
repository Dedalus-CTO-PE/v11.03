create table allctmaf
(
  alctteam    char(10) default ' ' not null,
  alcthcpc    char(10) default ' ' not null,
  alctsdat    char(8) default ' ' not null,
  alctedat    char(8) default ' ' not null,
  alctcdat    char(8) default ' ' not null,
  alctctim    char(8) default ' ' not null,
  alctcuid    char(10) default ' ' not null,
  alctudat    char(8) default ' ' not null,
  alctutim    char(8) default ' ' not null,
  alctuuid    char(10) default ' ' not null,
  alctspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allctma1 on allctmaf
(
alctteam,
alcthcpc
);
create unique index allctma2 on allctmaf
(
alcthcpc,
alctteam
);
revoke all on allctmaf from public ; 
grant select on allctmaf to public ; 
