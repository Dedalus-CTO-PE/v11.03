create table pmsdtcaf
(
  pmdtvisn    char(8) default ' ' not null,
  pmdtdoct    char(10) default ' ' not null,
  pmdtunit    char(3) default ' ' not null,
  pmdtsdat    char(8) default ' ' not null,
  pmdtstim    char(8) default ' ' not null,
  pmdtedat    char(8) default ' ' not null,
  pmdtetim    char(8) default ' ' not null,
  pmdtcdat    char(8) default ' ' not null,
  pmdtctim    char(8) default ' ' not null,
  pmdtcuid    char(10) default ' ' not null,
  pmdtudat    char(8) default ' ' not null,
  pmdtutim    char(8) default ' ' not null,
  pmdtuuid    char(10) default ' ' not null,
  pmdtteam    char(5) default ' ' not null,
  pmdtspar    char(45) default ' ' not null,
  lf          char(1)
);
create unique index pmsdtca1 on pmsdtcaf
(
pmdtvisn,
pmdtsdat,
pmdtstim
);
revoke all on pmsdtcaf from public ; 
grant select on pmsdtcaf to public ; 
