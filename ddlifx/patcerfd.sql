create table patceraf
(
  ptceurno    char(8) default ' ' not null,
  ptcetype    char(3) default ' ' not null,
  ptcefdat    char(8) default ' ' not null,
  ptcetdat    char(8) default ' ' not null,
  ptcesdat    char(8) default ' ' not null,
  ptcedcod    char(10) default ' ' not null,
  ptcesent    char(1) default ' ' not null,
  ptcecsta    char(3) default ' ' not null,
  ptcespar    char(26) default ' ' not null,
  lf          char(1)
);
create unique index patcera1 on patceraf
(
ptceurno,
ptcetype,
ptcefdat
);
create unique index patcera2 on patceraf
(
ptceurno,
ptcefdat,
ptcetype
);
revoke all on patceraf from public ; 
grant select on patceraf to public ; 
