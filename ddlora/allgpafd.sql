create table allgpaaf
(
  algacont    varchar2(8) default ' ' not null,
  algaurno    varchar2(8) default ' ' not null,
  algarefn    varchar2(8) default ' ' not null,
  algacurp    varchar2(1) default ' ' not null,
  algapsta    varchar2(3) default ' ' not null,
  algameal    varchar2(1) default ' ' not null,
  algamohx    varchar2(1) default ' ' not null,
  algacdat    varchar2(8) default ' ' not null,
  algactim    varchar2(8) default ' ' not null,
  algacuid    varchar2(10) default ' ' not null,
  algaudat    varchar2(8) default ' ' not null,
  algautim    varchar2(8) default ' ' not null,
  algauuid    varchar2(10) default ' ' not null,
  algarcst    varchar2(1) default ' ' not null,
  algaspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgpaa1 primary key( 
algacont,
algarefn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allgpaa2 on allgpaaf
(
algarefn,
algacont
)
  tablespace pas_indx; 
