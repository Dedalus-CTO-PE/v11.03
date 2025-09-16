create table allgreaf
(
  algecont    varchar2(8) default ' ' not null,
  algesesn    varchar2(8) default ' ' not null,
  algelocn    varchar2(3) default ' ' not null,
  algegdte    varchar2(8) default ' ' not null,
  algegtim    varchar2(8) default ' ' not null,
  algedurn    varchar2(3) default ' ' not null,
  algecdat    varchar2(8) default ' ' not null,
  algectim    varchar2(8) default ' ' not null,
  algecuid    varchar2(10) default ' ' not null,
  algeudat    varchar2(8) default ' ' not null,
  algeutim    varchar2(8) default ' ' not null,
  algeuuid    varchar2(10) default ' ' not null,
  algespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allgrea1 primary key( 
algecont)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allgrea2 on allgreaf
(
algesesn,
algecont
)
  tablespace pas_indx; 
create unique index allgrea3 on allgreaf
(
algegdte,
algesesn,
algecont
)
  tablespace pas_indx; 
