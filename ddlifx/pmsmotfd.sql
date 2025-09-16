create table pmsmotaf
(
  pmmavisn    char(8) default ' ' not null,
  pmmaadat    char(8) default ' ' not null,
  pmmaatim    char(8) default ' ' not null,
  pmmasusl    char(1) default ' ' not null,
  pmmasusi    char(1) default ' ' not null,
  pmmabasi    char(1) default ' ' not null,
  pmmasist    char(1) default ' ' not null,
  pmmawalk    char(1) default ' ' not null,
  pmmauarm    char(1) default ' ' not null,
  pmmahmov    char(1) default ' ' not null,
  pmmaahan    char(1) default ' ' not null,
  pmmacdat    char(8) default ' ' not null,
  pmmactim    char(8) default ' ' not null,
  pmmacuid    char(10) default ' ' not null,
  pmmaudat    char(8) default ' ' not null,
  pmmautim    char(8) default ' ' not null,
  pmmauuid    char(10) default ' ' not null,
  pmmaspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index pmsmota1 on pmsmotaf
(
pmmavisn,
pmmaadat,
pmmaatim
);
revoke all on pmsmotaf from public ; 
grant select on pmsmotaf to public ; 
