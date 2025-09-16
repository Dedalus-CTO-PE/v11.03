create table pmssawaf
(
  pmsacntr    varchar2(6) default ' ' not null,
  pmsaclcd    varchar2(3) default ' ' not null,
  pmsaasvr    varchar2(2) default ' ' not null,
  pmsaccod    varchar2(2) default ' ' not null,
  pmsaadsc    varchar2(80) default ' ' not null,
  pmsaedsc    varchar2(50) default ' ' not null,
  pmsasdov    varchar2(1) default ' ' not null,
  pmsaalos    number(8,2) default 0 not null,
  pmsalbin    number(4,0) default 0 not null,
  pmsaubin    number(4,0) default 0 not null,
  pmsasdpw    number(14,4) default 0 not null,
  pmsassop    number(14,4) default 0 not null,
  pmsainpw    number(14,4) default 0 not null,
  pmsalsop    number(14,4) default 0 not null,
  pmsacdat    varchar2(8) default ' ' not null,
  pmsactim    varchar2(8) default ' ' not null,
  pmsacuid    varchar2(10) default ' ' not null,
  pmsaudat    varchar2(8) default ' ' not null,
  pmsautim    varchar2(8) default ' ' not null,
  pmsauuid    varchar2(10) default ' ' not null,
  pmsaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmssawa1 primary key( 
pmsacntr,
pmsaclcd,
pmsaasvr,
pmsaccod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmssawa2 on pmssawaf
(
pmsaclcd,
pmsaasvr,
pmsaccod,
pmsacntr
)
  tablespace pas_indx; 
create unique index pmssawa3 on pmssawaf
(
pmsaccod,
pmsaclcd,
pmsaasvr,
pmsacntr
)
  tablespace pas_indx; 
