create table dispataf
(
  dspturno    char(8) default ' ' not null,
  dsptdiid    char(20) default ' ' not null,
  dsptcode    char(9) default ' ' not null,
  dsptsdat    char(8) default ' ' not null,
  dsptstim    char(8) default ' ' not null,
  dsptedat    char(8) default ' ' not null,
  dsptetim    char(8) default ' ' not null,
  dsptotcm    char(3) default ' ' not null,
  dsptfica    char(2) default ' ' not null,
  dsptcusr    char(10) default ' ' not null,
  dsptcdat    char(8) default ' ' not null,
  dsptctim    char(8) default ' ' not null,
  dsptuusr    char(10) default ' ' not null,
  dsptudat    char(8) default ' ' not null,
  dsptutim    char(8) default ' ' not null,
  dsptspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index dispata1 on dispataf
(
dspturno,
dsptcode
);
create unique index dispata2 on dispataf
(
dsptcode,
dspturno
);
revoke all on dispataf from public ; 
grant select on dispataf to public ; 
