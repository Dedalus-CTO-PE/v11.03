create table obsaudaf
(
  obauurno    char(8) default ' ' not null,
  obauvisn    char(8) default ' ' not null,
  obaucorr    char(4) default ' ' not null,
  obaudate    char(8) default ' ' not null,
  obautime    char(8) default ' ' not null,
  obauwebu    char(10) default ' ' not null,
  obautype    char(1) default ' ' not null,
  obaureas    char(3) default ' ' not null,
  obauspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index obsauda1 on obsaudaf
(
obauurno,
obauvisn,
obaucorr,
obaudate,
obautime,
obauwebu,
obautype
);
create unique index obsauda2 on obsaudaf
(
obaudate,
obautime,
obauurno,
obauvisn,
obaucorr,
obauwebu,
obautype
);
revoke all on obsaudaf from public ; 
grant select on obsaudaf to public ; 
