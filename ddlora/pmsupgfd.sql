create table pmsupgaf
(
  pmugurno    varchar2(8) default ' ' not null,
  pmugatyp    varchar2(3) default ' ' not null,
  pmugclam    varchar2(3) default ' ' not null,
  pmugfund    varchar2(6) default ' ' not null,
  pmugtabt    varchar2(3) default ' ' not null,
  pmugedat    varchar2(8) default ' ' not null,
  pmugmaxi    varchar2(3) default ' ' not null,
  pmugwari    varchar2(3) default ' ' not null,
  pmugmani    varchar2(3) default ' ' not null,
  pmugmaxo    varchar2(3) default ' ' not null,
  pmugwaro    varchar2(3) default ' ' not null,
  pmugmano    varchar2(3) default ' ' not null,
  pmugbrko    varchar2(1) default ' ' not null,
  pmugextd    varchar2(8) default ' ' not null,
  pmugsdat    varchar2(8) default ' ' not null,
  pmugpnam    varchar2(50) default ' ' not null,
  pmugudsi    varchar2(3) default ' ' not null,
  pmugsnap    varchar2(3) default ' ' not null,
  pmugendd    varchar2(8) default ' ' not null,
  pmugprog    varchar2(3) default ' ' not null,
  pmugpint    varchar2(1) default ' ' not null,
  pmugrpdt    varchar2(8) default ' ' not null,
  pmugrddt    varchar2(8) default ' ' not null,
  pmugcdat    varchar2(8) default ' ' not null,
  pmugctim    varchar2(8) default ' ' not null,
  pmugcuid    varchar2(10) default ' ' not null,
  pmugudat    varchar2(8) default ' ' not null,
  pmugutim    varchar2(8) default ' ' not null,
  pmuguuid    varchar2(10) default ' ' not null,
  pmugspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsupga1 primary key( 
pmugurno,
pmugatyp,
pmugclam,
pmugfund,
pmugtabt,
pmugedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsupgaf for pmsupgaf;
create unique index pmsupga2 on pmsupgaf
(
pmugedat,
pmugatyp,
pmugclam,
pmugfund,
pmugtabt,
pmugurno
)
  tablespace pas_indx; 
