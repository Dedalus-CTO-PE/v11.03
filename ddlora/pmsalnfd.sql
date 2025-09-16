create table pmsaudan
(
  pmanaudd    varchar2(8) default ' ' not null,
  pmanaudt    varchar2(8) default ' ' not null,
  pmanaudp    varchar2(2) default ' ' not null,
  pmanaudr    varchar2(1) default ' ' not null,
  pmanauds    number(1,0) default 0 not null,
  pmanaudo    varchar2(4) default ' ' not null,
  pmanurno    varchar2(8) default ' ' not null,
  pmanacat    varchar2(2) default ' ' not null,
  pmanacod    varchar2(3) default ' ' not null,
  pmancntr    varchar2(3) default ' ' not null,
  pmanlnno    varchar2(3) default ' ' not null,
  pmancomm    varchar2(70) default ' ' not null,
  pmanusid    varchar2(10) default ' ' not null,
  pmanspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pmsaudan on pmsaudan
(
pmanaudd,
pmanaudt,
pmanaudp,
pmanaudr
)
tablespace pas_indx; 
create index pmsauda2 on pmsaudan
(
pmanurno,
pmanaudd,
pmanaudt,
pmanaudp,
pmanaudr
)
tablespace pas_indx; 
create table pmsalnaf
(
  pmanurno    varchar2(8) default ' ' not null,
  pmanacat    varchar2(2) default ' ' not null,
  pmanacod    varchar2(3) default ' ' not null,
  pmancntr    varchar2(3) default ' ' not null,
  pmanlnno    varchar2(3) default ' ' not null,
  pmancomm    varchar2(70) default ' ' not null,
  pmanusid    varchar2(10) default ' ' not null,
  pmanspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsalna1 primary key( 
pmanurno,
pmanacat,
pmanacod,
pmancntr,
pmanlnno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
