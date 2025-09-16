create table pmsaudce
(
  pmceaudd    varchar2(8) default ' ' not null,
  pmceaudt    varchar2(8) default ' ' not null,
  pmceaudp    varchar2(2) default ' ' not null,
  pmceaudr    varchar2(1) default ' ' not null,
  pmceauds    number(1,0) default 0 not null,
  pmceaudo    varchar2(4) default ' ' not null,
  pmceurno    varchar2(8) default ' ' not null,
  pmcetype    varchar2(3) default ' ' not null,
  pmcecntr    varchar2(3) default ' ' not null,
  pmcetitl    varchar2(4) default ' ' not null,
  pmcesnam    varchar2(40) default ' ' not null,
  pmcegnam    varchar2(40) default ' ' not null,
  pmcegnm2    varchar2(40) default ' ' not null,
  pmceadd1    varchar2(35) default ' ' not null,
  pmceadd2    varchar2(35) default ' ' not null,
  pmceadd3    varchar2(35) default ' ' not null,
  pmceadd4    varchar2(35) default ' ' not null,
  pmcepost    varchar2(8) default ' ' not null,
  pmcetelp    varchar2(20) default ' ' not null,
  pmcetelb    varchar2(20) default ' ' not null,
  pmcetelm    varchar2(20) default ' ' not null,
  pmcerelp    varchar2(10) default ' ' not null,
  pmceemai    varchar2(80) default ' ' not null,
  pmcecdat    varchar2(8) default ' ' not null,
  pmcectim    varchar2(8) default ' ' not null,
  pmcecuid    varchar2(10) default ' ' not null,
  pmceudat    varchar2(8) default ' ' not null,
  pmceutim    varchar2(8) default ' ' not null,
  pmceuuid    varchar2(10) default ' ' not null,
  pmceslet    varchar2(1) default ' ' not null,
  pmceactv    varchar2(1) default ' ' not null,
  pmcecont    varchar2(3) default ' ' not null,
  pmcedina    varchar2(8) default ' ' not null,
  pmcetpid    varchar2(20) default ' ' not null,
  pmcewpid    varchar2(10) default ' ' not null,
  pmcessms    varchar2(1) default ' ' not null,
  pmcecmed    varchar2(10) default ' ' not null,
  pmcecref    varchar2(1) default ' ' not null,
  pmcecdob    varchar2(8) default ' ' not null,
  pmcespar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index pmsaudce on pmsaudce
(
pmceaudd,
pmceaudt,
pmceaudp,
pmceaudr
)
tablespace pas_indx; 
create index pmsaudc2 on pmsaudce
(
pmceurno,
pmcetype,
pmcecntr,
pmceaudd,
pmceaudt,
pmceaudp,
pmceaudr
)
tablespace pas_indx; 
create table pmscexaf
(
  pmceurno    varchar2(8) default ' ' not null,
  pmcetype    varchar2(3) default ' ' not null,
  pmcecntr    varchar2(3) default ' ' not null,
  pmcetitl    varchar2(4) default ' ' not null,
  pmcesnam    varchar2(40) default ' ' not null,
  pmcegnam    varchar2(40) default ' ' not null,
  pmcegnm2    varchar2(40) default ' ' not null,
  pmceadd1    varchar2(35) default ' ' not null,
  pmceadd2    varchar2(35) default ' ' not null,
  pmceadd3    varchar2(35) default ' ' not null,
  pmceadd4    varchar2(35) default ' ' not null,
  pmcepost    varchar2(8) default ' ' not null,
  pmcetelp    varchar2(20) default ' ' not null,
  pmcetelb    varchar2(20) default ' ' not null,
  pmcetelm    varchar2(20) default ' ' not null,
  pmcerelp    varchar2(10) default ' ' not null,
  pmceemai    varchar2(80) default ' ' not null,
  pmcecdat    varchar2(8) default ' ' not null,
  pmcectim    varchar2(8) default ' ' not null,
  pmcecuid    varchar2(10) default ' ' not null,
  pmceudat    varchar2(8) default ' ' not null,
  pmceutim    varchar2(8) default ' ' not null,
  pmceuuid    varchar2(10) default ' ' not null,
  pmceslet    varchar2(1) default ' ' not null,
  pmceactv    varchar2(1) default ' ' not null,
  pmcecont    varchar2(3) default ' ' not null,
  pmcedina    varchar2(8) default ' ' not null,
  pmcetpid    varchar2(20) default ' ' not null,
  pmcewpid    varchar2(10) default ' ' not null,
  pmcessms    varchar2(1) default ' ' not null,
  pmcecmed    varchar2(10) default ' ' not null,
  pmcecref    varchar2(1) default ' ' not null,
  pmcecdob    varchar2(8) default ' ' not null,
  pmcespar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscexa1 primary key( 
pmceurno,
pmcetype,
pmcecntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
