create table pmssrraf
(
  pmrrumid    char(16) default ' ' not null,
  pmrrucnt    char(2) default ' ' not null,
  pmrrmnum    char(20) default ' ' not null,
  pmrrurno    char(8) default ' ' not null,
  pmrrmtyp    char(2) default ' ' not null,
  pmrrrkey    char(30) default ' ' not null,
  pmrrrdte    char(8) default ' ' not null,
  pmrrrtim    char(8) default ' ' not null,
  pmrrresa    char(160) default ' ' not null,
  pmrrresb    char(160) default ' ' not null,
  pmrrresc    char(160) default ' ' not null,
  pmrrresd    char(160) default ' ' not null,
  pmrrrese    char(160) default ' ' not null,
  pmrrresf    char(160) default ' ' not null,
  pmrrstat    char(2) default ' ' not null,
  pmrrmapd    char(1) default ' ' not null,
  pmrrspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index pmssrra1 on pmssrraf
(
pmrrumid,
pmrrucnt
);
create unique index pmssrra2 on pmssrraf
(
pmrrurno,
pmrrumid,
pmrrucnt
);
create unique index pmssrra3 on pmssrraf
(
pmrrrdte,
pmrrrtim,
pmrrumid,
pmrrucnt
);
revoke all on pmssrraf from public ; 
grant select on pmssrraf to public ; 
