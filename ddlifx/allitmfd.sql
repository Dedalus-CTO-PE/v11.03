create table allitmaf
(
  alitvisn    char(8) default ' ' not null,
  alitencn    char(8) default ' ' not null,
  alititmc    char(2) default ' ' not null,
  alititmn    char(9) default ' ' not null,
  alitspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allitma1 on allitmaf
(
alitvisn,
alitencn,
alititmc
);
revoke all on allitmaf from public ; 
grant select on allitmaf to public ; 
