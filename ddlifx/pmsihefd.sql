create table pmsiheaf
(
  pmieurno    char(8) default ' ' not null,
  pmieihin    char(20) default ' ' not null,
  pmieotur    char(28) default ' ' not null,
  pmieadat    char(8) default ' ' not null,
  pmieatim    char(8) default ' ' not null,
  pmievsta    char(1) default ' ' not null,
  pmieasta    char(1) default ' ' not null,
  pmieihis    char(2) default ' ' not null,
  pmiehisv    char(10) default ' ' not null,
  pmiemesi    char(127) default ' ' not null,
  pmiecdat    char(8) default ' ' not null,
  pmiectim    char(8) default ' ' not null,
  pmiecuid    char(10) default ' ' not null,
  pmieudat    char(8) default ' ' not null,
  pmieutim    char(8) default ' ' not null,
  pmieuuid    char(10) default ' ' not null,
  pmiedesc    char(500) default ' ' not null,
  pmiespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsihea1 on pmsiheaf
(
pmieurno,
pmieihin,
pmieotur,
pmieadat,
pmieatim
);
create unique index pmsihea2 on pmsiheaf
(
pmieihin,
pmieadat,
pmieatim,
pmieurno,
pmieotur
);
create unique index pmsihea3 on pmsiheaf
(
pmieadat,
pmieatim,
pmieihin,
pmieurno,
pmieotur
);
create unique index pmsihea4 on pmsiheaf
(
pmieurno,
pmieihin,
pmieotur,
pmiecdat,
pmiectim,
pmieadat,
pmieatim
);
create unique index pmsihea5 on pmsiheaf
(
pmieihin,
pmiecdat,
pmiectim,
pmieurno,
pmieotur,
pmieadat,
pmieatim
);
create unique index pmsihea6 on pmsiheaf
(
pmiecdat,
pmiectim,
pmieihin,
pmieurno,
pmieotur,
pmieadat,
pmieatim
);
revoke all on pmsiheaf from public ; 
grant select on pmsiheaf to public ; 
