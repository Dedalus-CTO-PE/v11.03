create table patlocaf
(
  lsname      varchar2(40) default ' ' not null,
  lgname      varchar2(40) default ' ' not null,
  dladmno     varchar2(8) default ' ' not null,
  lurno       varchar2(8) default ' ' not null,
  lpcondc     varchar2(3) default ' ' not null,
  lpcondd     varchar2(35) default ' ' not null,
  lpcdate     varchar2(8) default ' ' not null,
  lpctime     varchar2(5) default ' ' not null,
  lpconam     varchar2(3) default ' ' not null,
  ptlcgnm2    varchar2(40) default ' ' not null,
  locspar     varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patloca1 primary key( 
lsname,
lgname,
dladmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
