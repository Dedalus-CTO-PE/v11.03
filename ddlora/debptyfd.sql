create table debaudpt
(
  dbptaudd    varchar2(8) default ' ' not null,
  dbptaudt    varchar2(8) default ' ' not null,
  dbptaudp    varchar2(2) default ' ' not null,
  dbptaudr    varchar2(1) default ' ' not null,
  dbptauds    number(1,0) default 0 not null,
  dbptaudo    varchar2(4) default ' ' not null,
  dbptpty     varchar2(8) default ' ' not null,
  dbptdes     varchar2(35) default ' ' not null,
  dbptact     number(1,0) default 0 not null,
  dbptdep     varchar2(8) default ' ' not null,
  dbptur1     varchar2(25) default ' ' not null,
  dbptur2     varchar2(25) default ' ' not null,
  dbptud1     varchar2(8) default ' ' not null,
  dbptud2     varchar2(8) default ' ' not null,
  dbptuy1     varchar2(1) default ' ' not null,
  dbptuy2     varchar2(1) default ' ' not null,
  dbptuc1     varchar2(3) default ' ' not null,
  dbptuc2     varchar2(3) default ' ' not null,
  dbptspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudpt on debaudpt
(
dbptaudd,
dbptaudt,
dbptaudp,
dbptaudr
)
tablespace pas_indx; 
create table debptyaf
(
  dbptpty     varchar2(8) default ' ' not null,
  dbptdes     varchar2(35) default ' ' not null,
  dbptact     number(1,0) default 0 not null,
  dbptdep     varchar2(8) default ' ' not null,
  dbptur1     varchar2(25) default ' ' not null,
  dbptur2     varchar2(25) default ' ' not null,
  dbptud1     varchar2(8) default ' ' not null,
  dbptud2     varchar2(8) default ' ' not null,
  dbptuy1     varchar2(1) default ' ' not null,
  dbptuy2     varchar2(1) default ' ' not null,
  dbptuc1     varchar2(3) default ' ' not null,
  dbptuc2     varchar2(3) default ' ' not null,
  dbptspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debptya1 primary key( 
dbptpty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debptya2 on debptyaf
(
dbptdep,
dbptpty
)
  tablespace pas_indx; 
create unique index debptya3 on debptyaf
(
dbptdes,
dbptpty
)
  tablespace pas_indx; 
