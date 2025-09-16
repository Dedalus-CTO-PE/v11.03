create table pmshdeaf
(
  pmhecntr    char(6) default ' ' not null,
  pmhehacg    char(3) default ' ' not null,
  pmhehact    char(3) default ' ' not null,
  pmhehacf    char(3) default ' ' not null,
  pmhecomv    decimal(14,4) default 0 not null,
  pmhecdat    char(8) default ' ' not null,
  pmhectim    char(8) default ' ' not null,
  pmhecuid    char(10) default ' ' not null,
  pmheudat    char(8) default ' ' not null,
  pmheutim    char(8) default ' ' not null,
  pmheuuid    char(10) default ' ' not null,
  pmhespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmshdea1 on pmshdeaf
(
pmhecntr,
pmhehacg,
pmhehact,
pmhehacf
);
revoke all on pmshdeaf from public ; 
grant select on pmshdeaf to public ; 
