create table patatraf
(
  ptarurno    char(8) default ' ' not null,
  ptarvisn    char(8) default ' ' not null,
  ptardate    char(8) default ' ' not null,
  ptartime    char(8) default ' ' not null,
  ptartype    char(3) default ' ' not null,
  ptarval1    char(6) default ' ' not null,
  ptarval2    char(6) default ' ' not null,
  ptarval3    char(6) default ' ' not null,
  ptarval4    char(6) default ' ' not null,
  ptarcod1    char(3) default ' ' not null,
  ptarcod2    char(3) default ' ' not null,
  ptarcod3    char(3) default ' ' not null,
  ptarcod4    char(3) default ' ' not null,
  ptartxt1    char(80) default ' ' not null,
  ptartxt2    char(80) default ' ' not null,
  ptartxt3    char(80) default ' ' not null,
  ptartxt4    char(80) default ' ' not null,
  ptardelr    char(1) default ' ' not null,
  ptarcusr    char(10) default ' ' not null,
  ptarcdte    char(8) default ' ' not null,
  ptarctme    char(8) default ' ' not null,
  ptaruusr    char(10) default ' ' not null,
  ptarudte    char(8) default ' ' not null,
  ptarutme    char(8) default ' ' not null,
  ptarfdte    char(8) default ' ' not null,
  ptarftme    char(8) default ' ' not null,
  ptarfusr    char(10) default ' ' not null,
  ptarspar    char(74) default ' ' not null,
  lf          char(1)
);
create unique index patatra1 on patatraf
(
ptarurno,
ptardate,
ptartime,
ptartype,
ptarvisn
);
create unique index patatra2 on patatraf
(
ptarurno,
ptarvisn,
ptardate,
ptartime,
ptartype
);
create unique index patatra3 on patatraf
(
ptarurno,
ptarvisn,
ptartype,
ptardate,
ptartime
);
create unique index patatra4 on patatraf
(
ptarudte,
ptarutme,
ptartype,
ptarurno,
ptarvisn,
ptardate,
ptartime
);
revoke all on patatraf from public ; 
grant select on patatraf to public ; 
