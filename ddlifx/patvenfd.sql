create table patvenaf
(
  ptvevisn    char(8) default ' ' not null,
  ptvevtyp    char(3) default ' ' not null,
  ptvesdat    char(8) default ' ' not null,
  ptvestim    char(8) default ' ' not null,
  ptveedat    char(8) default ' ' not null,
  ptveetim    char(8) default ' ' not null,
  ptvehour    decimal(7,2) default 0 not null,
  ptveicus    char(3) default ' ' not null,
  ptveisit    char(3) default ' ' not null,
  ptvespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patvena1 on patvenaf
(
ptvevisn,
ptvevtyp,
ptvesdat,
ptvestim
);
revoke all on patvenaf from public ; 
grant select on patvenaf to public ; 
