create table pcpaudev
(
  pcevaudd    varchar2(8) default ' ' not null,
  pcevaudt    varchar2(8) default ' ' not null,
  pcevaudp    varchar2(2) default ' ' not null,
  pcevaudr    varchar2(1) default ' ' not null,
  pcevauds    number(1,0) default 0 not null,
  pcevaudo    varchar2(4) default ' ' not null,
  pcevuniq    varchar2(10) default ' ' not null,
  pcevdate    varchar2(8) default ' ' not null,
  pcevtime    varchar2(8) default ' ' not null,
  pcevdcod    varchar2(4) default ' ' not null,
  pcevnurs    varchar2(6) default ' ' not null,
  pcevstat    number(1,0) default 0 not null,
  pcevspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pcpaudev on pcpaudev
(
pcevaudd,
pcevaudt,
pcevaudp,
pcevaudr
)
tablespace pas_indx; 
create table pcpevaaf
(
  pcevuniq    varchar2(10) default ' ' not null,
  pcevdate    varchar2(8) default ' ' not null,
  pcevtime    varchar2(8) default ' ' not null,
  pcevdcod    varchar2(4) default ' ' not null,
  pcevnurs    varchar2(6) default ' ' not null,
  pcevstat    number(1,0) default 0 not null,
  pcevspar    varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpevaa1 primary key( 
pcevuniq,
pcevdate,
pcevtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
