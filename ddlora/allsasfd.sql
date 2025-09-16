create table allsasaf
(
  alsavisn    varchar2(8) default ' ' not null,
  alsadate    varchar2(8) default ' ' not null,
  alsatime    varchar2(8) default ' ' not null,
  alsapain    number(2,0) default 0 not null,
  alsasymp    number(2,0) default 0 not null,
  alsapsyc    number(2,0) default 0 not null,
  alsafmly    number(2,0) default 0 not null,
  alsadelf    varchar2(1) default ' ' not null,
  alsacuid    varchar2(10) default ' ' not null,
  alsacdat    varchar2(8) default ' ' not null,
  alsactim    varchar2(8) default ' ' not null,
  alsauuid    varchar2(10) default ' ' not null,
  alsaudat    varchar2(8) default ' ' not null,
  alsautim    varchar2(8) default ' ' not null,
  alsaduid    varchar2(10) default ' ' not null,
  alsaddat    varchar2(8) default ' ' not null,
  alsadtim    varchar2(8) default ' ' not null,
  alsadres    varchar2(3) default ' ' not null,
  alsaspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allsasa1 primary key( 
alsavisn,
alsadate,
alsatime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
