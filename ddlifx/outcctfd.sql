create table outcctaf
(
  otccsite    char(6) default ' ' not null,
  otccctyp    char(6) default ' ' not null,
  otcccont    char(3) default ' ' not null,
  otcccdat    char(8) default ' ' not null,
  otccctim    char(8) default ' ' not null,
  otcccuid    char(10) default ' ' not null,
  otccudat    char(8) default ' ' not null,
  otccutim    char(8) default ' ' not null,
  otccuuid    char(10) default ' ' not null,
  otccspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outccta1 on outcctaf
(
otccsite,
otccctyp,
otcccont
);
revoke all on outcctaf from public ; 
grant select on outcctaf to public ; 
