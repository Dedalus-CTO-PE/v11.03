create table patatraf
(
  ptarurno    varchar2(8) default ' ' not null,
  ptarvisn    varchar2(8) default ' ' not null,
  ptardate    varchar2(8) default ' ' not null,
  ptartime    varchar2(8) default ' ' not null,
  ptartype    varchar2(3) default ' ' not null,
  ptarval1    varchar2(6) default ' ' not null,
  ptarval2    varchar2(6) default ' ' not null,
  ptarval3    varchar2(6) default ' ' not null,
  ptarval4    varchar2(6) default ' ' not null,
  ptarcod1    varchar2(3) default ' ' not null,
  ptarcod2    varchar2(3) default ' ' not null,
  ptarcod3    varchar2(3) default ' ' not null,
  ptarcod4    varchar2(3) default ' ' not null,
  ptartxt1    varchar2(80) default ' ' not null,
  ptartxt2    varchar2(80) default ' ' not null,
  ptartxt3    varchar2(80) default ' ' not null,
  ptartxt4    varchar2(80) default ' ' not null,
  ptardelr    varchar2(1) default ' ' not null,
  ptarcusr    varchar2(10) default ' ' not null,
  ptarcdte    varchar2(8) default ' ' not null,
  ptarctme    varchar2(8) default ' ' not null,
  ptaruusr    varchar2(10) default ' ' not null,
  ptarudte    varchar2(8) default ' ' not null,
  ptarutme    varchar2(8) default ' ' not null,
  ptarfdte    varchar2(8) default ' ' not null,
  ptarftme    varchar2(8) default ' ' not null,
  ptarfusr    varchar2(10) default ' ' not null,
  ptarspar    varchar2(74) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patatra1 primary key( 
ptarurno,
ptardate,
ptartime,
ptartype,
ptarvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patatra2 on patatraf
(
ptarurno,
ptarvisn,
ptardate,
ptartime,
ptartype
)
  tablespace pas_indx; 
create unique index patatra3 on patatraf
(
ptarurno,
ptarvisn,
ptartype,
ptardate,
ptartime
)
  tablespace pas_indx; 
create unique index patatra4 on patatraf
(
ptarudte,
ptarutme,
ptartype,
ptarurno,
ptarvisn,
ptardate,
ptartime
)
  tablespace pas_indx; 
