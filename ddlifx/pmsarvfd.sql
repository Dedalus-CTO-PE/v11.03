create table pmsarvaf
(
  pmavreqn    char(10) default ' ' not null,
  pmavrtyp    char(3) default ' ' not null,
  pmavcntr    char(3) default ' ' not null,
  pmavdatr    char(8) default ' ' not null,
  pmavtimr    char(8) default ' ' not null,
  pmavurno    char(8) default ' ' not null,
  pmavvisn    char(8) default ' ' not null,
  pmavrsta    char(3) default ' ' not null,
  pmavbtyp    char(3) default ' ' not null,
  pmavpsah    char(1) default ' ' not null,
  pmavhosp    char(3) default ' ' not null,
  pmavasas    char(4) default ' ' not null,
  pmavrsed    char(8) default ' ' not null,
  pmavdat1    char(8) default ' ' not null,
  pmavdat2    char(8) default ' ' not null,
  pmavdat3    char(8) default ' ' not null,
  pmavdat4    char(8) default ' ' not null,
  pmavdat5    char(8) default ' ' not null,
  pmavtim1    char(8) default ' ' not null,
  pmavtim2    char(8) default ' ' not null,
  pmavtim3    char(8) default ' ' not null,
  pmavtim4    char(8) default ' ' not null,
  pmavtim5    char(8) default ' ' not null,
  pmavyn01    char(1) default ' ' not null,
  pmavyn02    char(1) default ' ' not null,
  pmavyn03    char(1) default ' ' not null,
  pmavyn04    char(1) default ' ' not null,
  pmavyn05    char(1) default ' ' not null,
  pmavhcp1    char(10) default ' ' not null,
  pmavhcp2    char(10) default ' ' not null,
  pmavhcp3    char(10) default ' ' not null,
  pmavhcp4    char(10) default ' ' not null,
  pmavhcp5    char(10) default ' ' not null,
  pmavudc1    char(3) default ' ' not null,
  pmavudc2    char(3) default ' ' not null,
  pmavudc3    char(3) default ' ' not null,
  pmavudc4    char(3) default ' ' not null,
  pmavudc5    char(3) default ' ' not null,
  pmavcdat    char(8) default ' ' not null,
  pmavctim    char(8) default ' ' not null,
  pmavcuid    char(10) default ' ' not null,
  pmavudat    char(8) default ' ' not null,
  pmavutim    char(8) default ' ' not null,
  pmavuuid    char(10) default ' ' not null,
  pmavspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsarva1 on pmsarvaf
(
pmavreqn,
pmavrtyp,
pmavcntr
);
create unique index pmsarva2 on pmsarvaf
(
pmavreqn,
pmavdatr,
pmavtimr,
pmavrtyp,
pmavcntr
);
revoke all on pmsarvaf from public ; 
grant select on pmsarvaf to public ; 
