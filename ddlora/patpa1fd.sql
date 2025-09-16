create table patpa1af
(
  paurno      varchar2(8) default ' ' not null,
  padate      varchar2(8) default ' ' not null,
  patime      varchar2(8) default ' ' not null,
  paadd1      varchar2(35) default ' ' not null,
  paadd2      varchar2(35) default ' ' not null,
  pasubr      varchar2(35) default ' ' not null,
  paadd4      varchar2(35) default ' ' not null,
  papost      varchar2(8) default ' ' not null,
  patelep     varchar2(20) default ' ' not null,
  pateleb     varchar2(20) default ' ' not null,
  ptpador     varchar2(3) default ' ' not null,
  ptpamobl    varchar2(20) default ' ' not null,
  ptpaemal    varchar2(80) default ' ' not null,
  ptpacdte    varchar2(8) default ' ' not null,
  ptpactim    varchar2(8) default ' ' not null,
  ptpawebc    varchar2(10) default ' ' not null,
  ptpalupd    varchar2(8) default ' ' not null,
  ptpalupt    varchar2(8) default ' ' not null,
  ptpawebu    varchar2(10) default ' ' not null,
  ptpaosms    varchar2(1) default ' ' not null,
  ptpaspar    varchar2(49) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpa1a1 primary key( 
paurno,
padate,
patime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpa1a2 on patpa1af
(
padate,
patime,
paurno
)
  tablespace pas_indx; 
