create table webimeaf
(
  wbiefbid    varchar2(3) default ' ' not null,
  wbiearid    varchar2(20) default ' ' not null,
  wbieclid    varchar2(6) default ' ' not null,
  wbierptc    varchar2(3) default ' ' not null,
  wbiemecn    varchar2(2) default ' ' not null,
  wbiemeid    varchar2(2) default ' ' not null,
  wbiecfcd    varchar2(1) default ' ' not null,
  wbiecpsc    varchar2(4) default ' ' not null,
  wbiecpst    varchar2(80) default ' ' not null,
  wbiecpmn    varchar2(10) default ' ' not null,
  wbiecprn    varchar2(1) default ' ' not null,
  wbiecpfn    varchar2(40) default ' ' not null,
  wbiecpgn    varchar2(40) default ' ' not null,
  wbietrid    varchar2(24) default ' ' not null,
  wbiemsid    varchar2(36) default ' ' not null,
  wbiespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimea1 primary key( 
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimea2 on webimeaf
(
wbietrid,
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn
)
  tablespace pas_indx; 
create unique index webimea3 on webimeaf
(
wbiemsid,
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn
)
  tablespace pas_indx; 
