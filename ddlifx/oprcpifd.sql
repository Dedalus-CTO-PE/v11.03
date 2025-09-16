create table oprcpiaf
(
  opciuniq    char(10) default ' ' not null,
  opcicomp    char(3) default ' ' not null,
  opcicntr    char(2) default ' ' not null,
  opcicomm    char(200) default ' ' not null,
  opcicdat    char(8) default ' ' not null,
  opcictim    char(8) default ' ' not null,
  opcicuid    char(10) default ' ' not null,
  opciudat    char(8) default ' ' not null,
  opciutim    char(8) default ' ' not null,
  opciuuid    char(10) default ' ' not null,
  opcidelt    char(1) default ' ' not null,
  opciudel    char(10) default ' ' not null,
  opcispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index oprcpia1 on oprcpiaf
(
opciuniq,
opcicomp,
opcicntr
);
create unique index oprcpia2 on oprcpiaf
(
opciuniq,
opcicdat,
opcictim,
opcicomp,
opcicntr
);
revoke all on oprcpiaf from public ; 
grant select on oprcpiaf to public ; 
