create table pmssncaf
(
  pmscclcd    char(3) default ' ' not null,
  pmscvers    char(2) default ' ' not null,
  pmscicde    char(7) default ' ' not null,
  pmscdeff    char(8) default ' ' not null,
  pmscdeft    char(8) default ' ' not null,
  pmscfmse    char(1) default ' ' not null,
  pmscfmsl    decimal(2,0) default 0 not null,
  pmscfmsh    decimal(2,0) default 0 not null,
  pmscfcse    char(1) default ' ' not null,
  pmscfcsl    decimal(2,0) default 0 not null,
  pmscfcsh    decimal(2,0) default 0 not null,
  pmscagel    char(1) default ' ' not null,
  pmscage     decimal(2,0) default 0 not null,
  pmscasso    char(1) default ' ' not null,
  pmscftsr    char(1) default ' ' not null,
  pmscftsl    decimal(3,0) default 0 not null,
  pmscftsh    decimal(3,0) default 0 not null,
  pmscspar    char(43) default ' ' not null,
  lf          char(1)
);
create unique index pmssnca1 on pmssncaf
(
pmscclcd,
pmscvers,
pmscicde,
pmscdeff
);
create unique index pmssnca2 on pmssncaf
(
pmscicde,
pmscdeff,
pmscclcd,
pmscvers
);
revoke all on pmssncaf from public ; 
grant select on pmssncaf to public ; 
