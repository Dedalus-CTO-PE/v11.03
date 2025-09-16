create table emrtrfaf
(
  emtftrig    varchar2(3) default ' ' not null,
  emtfattd    varchar2(3) default ' ' not null,
  emtfefda    varchar2(8) default ' ' not null,
  emtfdesc    varchar2(30) default ' ' not null,
  emtfamnt    number(14,2) default 0 not null,
  emtfscod    varchar2(3) default ' ' not null,
  emtfactv    number(1,0) default 0 not null,
  emtfcdat    varchar2(8) default ' ' not null,
  emtfctim    varchar2(8) default ' ' not null,
  emtfcuid    varchar2(10) default ' ' not null,
  emtfudat    varchar2(8) default ' ' not null,
  emtfutim    varchar2(8) default ' ' not null,
  emtfuuid    varchar2(10) default ' ' not null,
  emtfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrtrfa1 primary key( 
emtftrig,
emtfattd,
emtfefda)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
