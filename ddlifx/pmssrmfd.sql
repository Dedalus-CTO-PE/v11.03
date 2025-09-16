create table pmssrmaf
(
  pmsrmvar    char(10) default ' ' not null,
  pmsrinbs    char(50) default ' ' not null,
  pmsrmval    char(1) default ' ' not null,
  pmsractv    char(1) default ' ' not null,
  pmsrwebc    char(10) default ' ' not null,
  pmsrcdte    char(8) default ' ' not null,
  pmsrctim    char(8) default ' ' not null,
  pmsrwebu    char(10) default ' ' not null,
  pmsrudte    char(8) default ' ' not null,
  pmsrutim    char(8) default ' ' not null,
  pmsrspar    char(49) default ' ' not null,
  lf          char(1)
);
create unique index pmssrma1 on pmssrmaf
(
pmsrmvar,
pmsrinbs
);
create unique index pmssrma2 on pmssrmaf
(
pmsrinbs,
pmsrmvar
);
revoke all on pmssrmaf from public ; 
grant select on pmssrmaf to public ; 
