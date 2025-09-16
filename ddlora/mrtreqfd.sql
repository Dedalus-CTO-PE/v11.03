create table mrtreqaf
(
  dmrrqnum    varchar2(10) default ' ' not null,
  mrrqdate    varchar2(8) default ' ' not null,
  mrrqtime    varchar2(8) default ' ' not null,
  mrrqdept    varchar2(30) default ' ' not null,
  mrrqrqst    varchar2(30) default ' ' not null,
  mrrqurgn    varchar2(30) default ' ' not null,
  mrrqurno    varchar2(8) default ' ' not null,
  mrrqopid    varchar2(4) default ' ' not null,
  mrrqhosp    varchar2(3) default ' ' not null,
  mrrqspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtreqa1 primary key( 
dmrrqnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtreqa2 on mrtreqaf
(
mrrqdate,
mrrqtime,
dmrrqnum
)
  tablespace pas_indx; 
create unique index mrtreqa3 on mrtreqaf
(
mrrqdept,
mrrqdate,
mrrqtime,
dmrrqnum
)
  tablespace pas_indx; 
