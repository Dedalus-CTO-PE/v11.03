create table resdeaaf
(
  redardt     varchar2(8) default ' ' not null,
  redartm     varchar2(5) default ' ' not null,
  redarun     varchar2(4) default ' ' not null,
  redasid     varchar2(4) default ' ' not null,
  redapid     varchar2(16) default ' ' not null,
  redavty     varchar2(2) default ' ' not null,
  redaoty     varchar2(12) default ' ' not null,
  redaocs     varchar2(12) default ' ' not null,
  redaosc     varchar2(10) default ' ' not null,
  redaosd     varchar2(20) default ' ' not null,
  redavst     varchar2(127) default ' ' not null,
  redavnm     number(14,4) default 0 not null,
  redauni     varchar2(20) default ' ' not null,
  redarfr     varchar2(20) default ' ' not null,
  redaabf     varchar2(5) default ' ' not null,
  redaprb     number(6,2) default 0 not null,
  redanat     varchar2(2) default ' ' not null,
  redasta     varchar2(1) default ' ' not null,
  redatfl     varchar2(1) default ' ' not null,
  redaodt     varchar2(8) default ' ' not null,
  redaotm     varchar2(5) default ' ' not null,
  redaper     varchar2(25) default ' ' not null,
  redarob     varchar2(25) default ' ' not null,
  redaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resdeaa1 primary key( 
redardt,
redartm,
redarun,
redasid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index resdeaa2 on resdeaaf
(
redapid,
redaocs,
redaoty,
redardt,
redartm,
redarun,
redasid
)
  tablespace pas_indx; 
