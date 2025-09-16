create table pmsiheaf
(
  pmieurno    varchar2(8) default ' ' not null,
  pmieihin    varchar2(20) default ' ' not null,
  pmieotur    varchar2(28) default ' ' not null,
  pmieadat    varchar2(8) default ' ' not null,
  pmieatim    varchar2(8) default ' ' not null,
  pmievsta    varchar2(1) default ' ' not null,
  pmieasta    varchar2(1) default ' ' not null,
  pmieihis    varchar2(2) default ' ' not null,
  pmiehisv    varchar2(10) default ' ' not null,
  pmiemesi    varchar2(127) default ' ' not null,
  pmiecdat    varchar2(8) default ' ' not null,
  pmiectim    varchar2(8) default ' ' not null,
  pmiecuid    varchar2(10) default ' ' not null,
  pmieudat    varchar2(8) default ' ' not null,
  pmieutim    varchar2(8) default ' ' not null,
  pmieuuid    varchar2(10) default ' ' not null,
  pmiedesc    varchar2(500) default ' ' not null,
  pmiespar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsihea1 primary key( 
pmieurno,
pmieihin,
pmieotur,
pmieadat,
pmieatim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsihea2 on pmsiheaf
(
pmieihin,
pmieadat,
pmieatim,
pmieurno,
pmieotur
)
  tablespace pas_indx; 
create unique index pmsihea3 on pmsiheaf
(
pmieadat,
pmieatim,
pmieihin,
pmieurno,
pmieotur
)
  tablespace pas_indx; 
create unique index pmsihea4 on pmsiheaf
(
pmieurno,
pmieihin,
pmieotur,
pmiecdat,
pmiectim,
pmieadat,
pmieatim
)
  tablespace pas_indx; 
create unique index pmsihea5 on pmsiheaf
(
pmieihin,
pmiecdat,
pmiectim,
pmieurno,
pmieotur,
pmieadat,
pmieatim
)
  tablespace pas_indx; 
create unique index pmsihea6 on pmsiheaf
(
pmiecdat,
pmiectim,
pmieihin,
pmieurno,
pmieotur,
pmieadat,
pmieatim
)
  tablespace pas_indx; 
