create table allsasaf
(
  alsavisn    char(8) default ' ' not null,
  alsadate    char(8) default ' ' not null,
  alsatime    char(8) default ' ' not null,
  alsapain    decimal(2,0) default 0 not null,
  alsasymp    decimal(2,0) default 0 not null,
  alsapsyc    decimal(2,0) default 0 not null,
  alsafmly    decimal(2,0) default 0 not null,
  alsadelf    char(1) default ' ' not null,
  alsacuid    char(10) default ' ' not null,
  alsacdat    char(8) default ' ' not null,
  alsactim    char(8) default ' ' not null,
  alsauuid    char(10) default ' ' not null,
  alsaudat    char(8) default ' ' not null,
  alsautim    char(8) default ' ' not null,
  alsaduid    char(10) default ' ' not null,
  alsaddat    char(8) default ' ' not null,
  alsadtim    char(8) default ' ' not null,
  alsadres    char(3) default ' ' not null,
  alsaspar    char(17) default ' ' not null,
  lf          char(1)
);
create unique index allsasa1 on allsasaf
(
alsavisn,
alsadate,
alsatime
);
revoke all on allsasaf from public ; 
grant select on allsasaf to public ; 
