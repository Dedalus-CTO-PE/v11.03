create table mehcjraf
(
  dmhcradm    varchar2(8) default ' ' not null,
  mhcrdate    varchar2(8) default ' ' not null,
  mhcrtime    varchar2(5) default ' ' not null,
  mhcrdeci    number(1,0) default 0 not null,
  mhcrldat    varchar2(8) default ' ' not null,
  mhcrltim    varchar2(5) default ' ' not null,
  mhcrreas    varchar2(3) default ' ' not null,
  mhcrndat    varchar2(8) default ' ' not null,
  mhcrspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehcjra1 primary key( 
dmhcradm,
mhcrdate,
mhcrtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
