create table apsppdaf
(
  apppter     varchar2(2) default ' ' not null,
  apppdes     varchar2(30) default ' ' not null,
  appptyp     number(1,0) default 0 not null,
  apppda1     number(4,0) default 0 not null,
  appppe1     number(4,2) default 0 not null,
  apppda2     number(4,0) default 0 not null,
  appppe2     number(4,2) default 0 not null,
  apppda3     number(4,0) default 0 not null,
  appppe3     number(4,2) default 0 not null,
  appppin     varchar2(1) default ' ' not null,
  apppmdi     varchar2(3) default ' ' not null,
  apppspa     varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsppda1 primary key( 
apppter)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
