create table patcchaf
(
  ptccurno    char(8) default ' ' not null,
  ptccctyp    char(3) default ' ' not null,
  ptcccnum    char(20) default ' ' not null,
  ptccexdt    char(8) default ' ' not null,
  ptccdvac    char(3) default ' ' not null,
  ptccupdt    char(1) default ' ' not null,
  ptccupdr    char(3) default ' ' not null,
  ptccpexd    char(8) default ' ' not null,
  ptccpcdc    char(3) default ' ' not null,
  ptccurid    char(10) default ' ' not null,
  ptccdate    char(8) default ' ' not null,
  ptcctime    char(8) default ' ' not null,
  ptccspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patccha1 on patcchaf
(
ptccurno,
ptccexdt,
ptccctyp,
ptccdate,
ptcctime
);
create unique index patccha2 on patcchaf
(
ptccctyp,
ptccexdt,
ptccurno,
ptccdate,
ptcctime
);
revoke all on patcchaf from public ; 
grant select on patcchaf to public ; 
