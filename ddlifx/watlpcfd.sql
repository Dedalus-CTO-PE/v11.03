create table watlpcaf
(
  wtlpsche    char(5) default ' ' not null,
  wtlpurno    char(8) default ' ' not null,
  wtlppcod    char(9) default ' ' not null,
  wtlppcnt    char(2) default ' ' not null,
  wtlpprnt    char(6) default ' ' not null,
  wtlpcopy    decimal(3,0) default 0 not null,
  wtlplett    char(3) default ' ' not null,
  wtlpwebu    char(10) default ' ' not null,
  wtlprdat    char(8) default ' ' not null,
  wtlprtim    char(8) default ' ' not null,
  wtlpspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index watlpca1 on watlpcaf
(
wtlpsche
);
revoke all on watlpcaf from public ; 
grant select on watlpcaf to public ; 
