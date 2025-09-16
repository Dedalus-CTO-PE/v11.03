create table webimaaf
(
  wbiainvn    varchar2(8) default ' ' not null,
  wbiadate    varchar2(8) default ' ' not null,
  wbiatime    varchar2(8) default ' ' not null,
  wbiabatn    varchar2(8) default ' ' not null,
  wbiastat    number(2,0) default 0 not null,
  wbiatype    varchar2(2) default ' ' not null,
  wbiaoper    varchar2(10) default ' ' not null,
  wbiatrid    varchar2(24) default ' ' not null,
  wbiaeror    varchar2(4) default ' ' not null,
  wbiaerot    varchar2(100) default ' ' not null,
  wbiamsid    varchar2(36) default ' ' not null,
  wbiaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimaa1 primary key( 
wbiainvn,
wbiadate,
wbiatime,
wbiatype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimaa2 on webimaaf
(
wbiadate,
wbiatime,
wbiatype,
wbiainvn
)
  tablespace pas_indx; 
create unique index webimaa3 on webimaaf
(
wbiainvn,
wbiabatn,
wbiadate,
wbiatime,
wbiatype
)
  tablespace pas_indx; 
create unique index webimaa4 on webimaaf
(
wbiatrid,
wbiainvn,
wbiadate,
wbiatime,
wbiatype
)
  tablespace pas_indx; 
