create table allaudaf
(
  alauvisn    char(8) default ' ' not null,
  alauadat    char(8) default ' ' not null,
  alauatim    char(8) default ' ' not null,
  alauauid    char(10) default ' ' not null,
  alauacti    char(3) default ' ' not null,
  alauupdt    char(2) default ' ' not null,
  alaucomm    char(50) default ' ' not null,
  alauudat    char(8) default ' ' not null,
  alauutim    char(8) default ' ' not null,
  alauuuid    char(10) default ' ' not null,
  alauspar    char(24) default ' ' not null,
  lf          char(1)
);
create unique index allauda1 on allaudaf
(
alauvisn,
alauadat,
alauatim
);
create unique index allauda2 on allaudaf
(
alauvisn,
alauupdt,
alauadat,
alauatim
);
create unique index allauda3 on allaudaf
(
alauadat,
alauatim,
alauvisn
);
revoke all on allaudaf from public ; 
grant select on allaudaf to public ; 
