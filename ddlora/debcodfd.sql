create table debaudcd
(
  dbcdaudd    varchar2(8) default ' ' not null,
  dbcdaudt    varchar2(8) default ' ' not null,
  dbcdaudp    varchar2(2) default ' ' not null,
  dbcdaudr    varchar2(1) default ' ' not null,
  dbcdauds    number(1,0) default 0 not null,
  dbcdaudo    varchar2(4) default ' ' not null,
  dbcdcat     varchar2(4) default ' ' not null,
  dbcdcod     varchar2(3) default ' ' not null,
  dbcddes     varchar2(35) default ' ' not null,
  dbcdact     number(1,0) default 0 not null,
  dbcdspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index debaudcd on debaudcd
(
dbcdaudd,
dbcdaudt,
dbcdaudp,
dbcdaudr
)
tablespace pas_indx; 
create table debcodaf
(
  dbcdcat     varchar2(4) default ' ' not null,
  dbcdcod     varchar2(3) default ' ' not null,
  dbcddes     varchar2(35) default ' ' not null,
  dbcdact     number(1,0) default 0 not null,
  dbcdspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint debcoda1 primary key( 
dbcdcat,
dbcdcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index debcoda2 on debcodaf
(
dbcdcod,
dbcdcat
)
  tablespace pas_indx; 
