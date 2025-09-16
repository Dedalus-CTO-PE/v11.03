create table allmaiaf
(
  almaequi    char(10) default ' ' not null,
  almamnum    char(8) default ' ' not null,
  almamdat    char(8) default ' ' not null,
  almamtim    char(8) default ' ' not null,
  almacond    char(3) default ' ' not null,
  almahdat    char(8) default ' ' not null,
  almahnum    char(10) default ' ' not null,
  almacdat    char(8) default ' ' not null,
  almactim    char(8) default ' ' not null,
  almacusr    char(10) default ' ' not null,
  almaudat    char(8) default ' ' not null,
  almautim    char(8) default ' ' not null,
  almauusr    char(10) default ' ' not null,
  almaspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allmaia1 on allmaiaf
(
almaequi,
almamnum
);
create unique index allmaia2 on allmaiaf
(
almaequi,
almamdat,
almamnum
);
revoke all on allmaiaf from public ; 
grant select on allmaiaf to public ; 
