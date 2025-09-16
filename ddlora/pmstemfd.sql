create table pmstemaf
(
  pmtmteam    varchar2(5) default ' ' not null,
  pmtmdesc    varchar2(30) default ' ' not null,
  pmtmactv    varchar2(1) default ' ' not null,
  pmtmcuid    varchar2(10) default ' ' not null,
  pmtmcdat    varchar2(8) default ' ' not null,
  pmtmctim    varchar2(8) default ' ' not null,
  pmtmuuid    varchar2(10) default ' ' not null,
  pmtmudat    varchar2(8) default ' ' not null,
  pmtmutim    varchar2(8) default ' ' not null,
  pmtmspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmstema1 primary key( 
pmtmteam)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
