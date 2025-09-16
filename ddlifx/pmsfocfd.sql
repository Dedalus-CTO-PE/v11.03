create table pmsfocaf
(
  pmfovisn    char(8) default ' ' not null,
  pmfoepno    char(2) default ' ' not null,
  pmfopcdt    char(8) default ' ' not null,
  pmfophoc    char(3) default ' ' not null,
  pmforapc    char(2) default ' ' not null,
  pmfocdat    char(8) default ' ' not null,
  pmfoctim    char(8) default ' ' not null,
  pmfocuid    char(10) default ' ' not null,
  pmfoudat    char(8) default ' ' not null,
  pmfoutim    char(8) default ' ' not null,
  pmfouuid    char(10) default ' ' not null,
  pmfospar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmsfoca1 on pmsfocaf
(
pmfovisn,
pmfoepno,
pmfopcdt
);
revoke all on pmsfocaf from public ; 
grant select on pmsfocaf to public ; 
