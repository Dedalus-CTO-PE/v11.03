create table pmsarvaf
(
  pmavreqn    varchar2(10) default ' ' not null,
  pmavrtyp    varchar2(3) default ' ' not null,
  pmavcntr    varchar2(3) default ' ' not null,
  pmavdatr    varchar2(8) default ' ' not null,
  pmavtimr    varchar2(8) default ' ' not null,
  pmavurno    varchar2(8) default ' ' not null,
  pmavvisn    varchar2(8) default ' ' not null,
  pmavrsta    varchar2(3) default ' ' not null,
  pmavbtyp    varchar2(3) default ' ' not null,
  pmavpsah    varchar2(1) default ' ' not null,
  pmavhosp    varchar2(3) default ' ' not null,
  pmavasas    varchar2(4) default ' ' not null,
  pmavrsed    varchar2(8) default ' ' not null,
  pmavdat1    varchar2(8) default ' ' not null,
  pmavdat2    varchar2(8) default ' ' not null,
  pmavdat3    varchar2(8) default ' ' not null,
  pmavdat4    varchar2(8) default ' ' not null,
  pmavdat5    varchar2(8) default ' ' not null,
  pmavtim1    varchar2(8) default ' ' not null,
  pmavtim2    varchar2(8) default ' ' not null,
  pmavtim3    varchar2(8) default ' ' not null,
  pmavtim4    varchar2(8) default ' ' not null,
  pmavtim5    varchar2(8) default ' ' not null,
  pmavyn01    varchar2(1) default ' ' not null,
  pmavyn02    varchar2(1) default ' ' not null,
  pmavyn03    varchar2(1) default ' ' not null,
  pmavyn04    varchar2(1) default ' ' not null,
  pmavyn05    varchar2(1) default ' ' not null,
  pmavhcp1    varchar2(10) default ' ' not null,
  pmavhcp2    varchar2(10) default ' ' not null,
  pmavhcp3    varchar2(10) default ' ' not null,
  pmavhcp4    varchar2(10) default ' ' not null,
  pmavhcp5    varchar2(10) default ' ' not null,
  pmavudc1    varchar2(3) default ' ' not null,
  pmavudc2    varchar2(3) default ' ' not null,
  pmavudc3    varchar2(3) default ' ' not null,
  pmavudc4    varchar2(3) default ' ' not null,
  pmavudc5    varchar2(3) default ' ' not null,
  pmavcdat    varchar2(8) default ' ' not null,
  pmavctim    varchar2(8) default ' ' not null,
  pmavcuid    varchar2(10) default ' ' not null,
  pmavudat    varchar2(8) default ' ' not null,
  pmavutim    varchar2(8) default ' ' not null,
  pmavuuid    varchar2(10) default ' ' not null,
  pmavspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsarva1 primary key( 
pmavreqn,
pmavrtyp,
pmavcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsarva2 on pmsarvaf
(
pmavreqn,
pmavdatr,
pmavtimr,
pmavrtyp,
pmavcntr
)
  tablespace pas_indx; 
