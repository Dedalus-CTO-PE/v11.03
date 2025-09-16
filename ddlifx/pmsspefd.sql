create table pmsspeaf
(
  pmsehcpc    char(10) default ' ' not null,
  pmsespec    char(3) default ' ' not null,
  pmsesdat    char(8) default ' ' not null,
  pmseedat    char(8) default ' ' not null,
  pmsecdat    char(8) default ' ' not null,
  pmsectim    char(8) default ' ' not null,
  pmsecuid    char(10) default ' ' not null,
  pmseudat    char(8) default ' ' not null,
  pmseutim    char(8) default ' ' not null,
  pmseuuid    char(10) default ' ' not null,
  pmsespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsspea1 on pmsspeaf
(
pmsehcpc,
pmsespec,
pmsesdat
);
revoke all on pmsspeaf from public ; 
grant select on pmsspeaf to public ; 
