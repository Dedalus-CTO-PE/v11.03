create table allproaf
(
  alpodept    char(3) default ' ' not null,
  alpoproc    char(9) default ' ' not null,
  alpodesc    char(50) default ' ' not null,
  alpoicdc    char(9) default ' ' not null,
  alpoactv    char(1) default ' ' not null,
  alpocdat    char(8) default ' ' not null,
  alpoctim    char(8) default ' ' not null,
  alpocuid    char(10) default ' ' not null,
  alpoudat    char(8) default ' ' not null,
  alpoutim    char(8) default ' ' not null,
  alpouuid    char(10) default ' ' not null,
  alpomhdp    char(4) default ' ' not null,
  alpomhcp    char(4) default ' ' not null,
  alpospar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index allproa1 on allproaf
(
alpodept,
alpoproc
);
create unique index allproa2 on allproaf
(
alpodept,
alpodesc,
alpoproc
);
revoke all on allproaf from public ; 
grant select on allproaf to public ; 
