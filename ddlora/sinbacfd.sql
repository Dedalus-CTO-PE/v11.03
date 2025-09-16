create table sinaudba
(
  sibaaudd    varchar2(8) default ' ' not null,
  sibaaudt    varchar2(8) default ' ' not null,
  sibaaudp    varchar2(2) default ' ' not null,
  sibaaudr    varchar2(1) default ' ' not null,
  sibaauds    number(1,0) default 0 not null,
  sibaaudo    varchar2(4) default ' ' not null,
  sibacst     varchar2(5) default ' ' not null,
  sibacat     varchar2(7) default ' ' not null,
  sibareq     varchar2(8) default ' ' not null,
  sibawar     varchar2(5) default ' ' not null,
  sibadat     varchar2(8) default ' ' not null,
  sibaqty     number(12,2) default 0 not null,
  sibaresi    varchar2(10) default ' ' not null,
  sibaspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudba on sinaudba
(
sibaaudd,
sibaaudt,
sibaaudp,
sibaaudr
)
tablespace pas_indx; 
create table sinbacaf
(
  sibacst     varchar2(5) default ' ' not null,
  sibacat     varchar2(7) default ' ' not null,
  sibareq     varchar2(8) default ' ' not null,
  sibawar     varchar2(5) default ' ' not null,
  sibadat     varchar2(8) default ' ' not null,
  sibaqty     number(12,2) default 0 not null,
  sibaresi    varchar2(10) default ' ' not null,
  sibaspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinbaca1 primary key( 
sibacst,
sibacat,
sibareq,
sibawar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinbaca2 on sinbacaf
(
sibawar,
sibacat,
sibacst,
sibareq
)
  tablespace pas_indx; 
create unique index sinbaca3 on sinbacaf
(
sibacat,
sibawar,
sibacst,
sibareq
)
  tablespace pas_indx; 
