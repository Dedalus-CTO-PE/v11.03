create table allrhlaf
(
  alrhvisn    varchar2(8) default ' ' not null,
  alrhtype    varchar2(2) default ' ' not null,
  alrhuniq    varchar2(3) default ' ' not null,
  alrhcode    varchar2(9) default ' ' not null,
  alrhdate    varchar2(8) default ' ' not null,
  alrhcdat    varchar2(8) default ' ' not null,
  alrhctim    varchar2(8) default ' ' not null,
  alrhcuid    varchar2(10) default ' ' not null,
  alrhcod2    varchar2(9) default ' ' not null,
  alrhspar    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allrhla1 primary key( 
alrhvisn,
alrhtype,
alrhuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allrhla2 on allrhlaf
(
alrhcode,
alrhvisn,
alrhtype,
alrhuniq
)
  tablespace pas_indx; 
