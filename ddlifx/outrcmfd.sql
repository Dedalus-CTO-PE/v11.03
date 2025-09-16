create table outrcmaf
(
  otrcuniq    char(10) default ' ' not null,
  otrcline    char(3) default ' ' not null,
  otrccomm    char(80) default ' ' not null,
  otrccuid    char(10) default ' ' not null,
  otrccdat    char(8) default ' ' not null,
  otrcctim    char(8) default ' ' not null,
  otrcuuid    char(10) default ' ' not null,
  otrcudat    char(8) default ' ' not null,
  otrcutim    char(8) default ' ' not null,
  otrcspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index outrcma1 on outrcmaf
(
otrcuniq,
otrcline
);
revoke all on outrcmaf from public ; 
grant select on outrcmaf to public ; 
