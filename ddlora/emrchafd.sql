create table emrchaaf
(
  emchvisn    varchar2(8) default ' ' not null,
  emchdate    varchar2(8) default ' ' not null,
  emchtime    varchar2(8) default ' ' not null,
  emchusid    varchar2(10) default ' ' not null,
  emchupty    varchar2(2) default ' ' not null,
  emchreas    varchar2(3) default ' ' not null,
  emchoval    varchar2(80) default ' ' not null,
  emchcval    varchar2(80) default ' ' not null,
  emchspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrchaa1 primary key( 
emchvisn,
emchdate,
emchtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrchaa2 on emrchaaf
(
emchdate,
emchtime,
emchvisn
)
  tablespace pas_indx; 
