create table amsdsfaf
(
  amdsreg     char(2) default ' ' not null,
  amdsass     char(12) default ' ' not null,
  amdsyear    char(4) default ' ' not null,
  amdsg01     decimal(1,0) default 0 not null,
  amdsg02     decimal(1,0) default 0 not null,
  amdsg03     decimal(1,0) default 0 not null,
  amdsg04     decimal(1,0) default 0 not null,
  amdsg05     decimal(1,0) default 0 not null,
  amdsg06     decimal(1,0) default 0 not null,
  amdsg07     decimal(1,0) default 0 not null,
  amdsg08     decimal(1,0) default 0 not null,
  amdsg09     decimal(1,0) default 0 not null,
  amdsg10     decimal(1,0) default 0 not null,
  amdsg11     decimal(1,0) default 0 not null,
  amdsg12     decimal(1,0) default 0 not null,
  amdsg13     decimal(1,0) default 0 not null,
  amdsa01     decimal(14,2) default 0 not null,
  amdsa02     decimal(14,2) default 0 not null,
  amdsa03     decimal(14,2) default 0 not null,
  amdsa04     decimal(14,2) default 0 not null,
  amdsa05     decimal(14,2) default 0 not null,
  amdsa06     decimal(14,2) default 0 not null,
  amdsa07     decimal(14,2) default 0 not null,
  amdsa08     decimal(14,2) default 0 not null,
  amdsa09     decimal(14,2) default 0 not null,
  amdsa10     decimal(14,2) default 0 not null,
  amdsa11     decimal(14,2) default 0 not null,
  amdsa12     decimal(14,2) default 0 not null,
  amdsa13     decimal(14,2) default 0 not null,
  amdst01     decimal(14,2) default 0 not null,
  amdst02     decimal(14,2) default 0 not null,
  amdst03     decimal(14,2) default 0 not null,
  amdst04     decimal(14,2) default 0 not null,
  amdst05     decimal(14,2) default 0 not null,
  amdst06     decimal(14,2) default 0 not null,
  amdst07     decimal(14,2) default 0 not null,
  amdst08     decimal(14,2) default 0 not null,
  amdst09     decimal(14,2) default 0 not null,
  amdst10     decimal(14,2) default 0 not null,
  amdst11     decimal(14,2) default 0 not null,
  amdst12     decimal(14,2) default 0 not null,
  amdst13     decimal(14,2) default 0 not null,
  amdsaad     decimal(14,2) default 0 not null,
  amdstad     decimal(14,2) default 0 not null,
  amdsrvt     decimal(14,2) default 0 not null,
  amdstdt     char(4) default ' ' not null,
  amdsadt     char(4) default ' ' not null,
  amdsspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsdsfa1 on amsdsfaf
(
amdsreg,
amdsass,
amdsyear
);
create unique index amsdsfa2 on amsdsfaf
(
amdsyear,
amdsreg,
amdsass
);
revoke all on amsdsfaf from public ; 
grant select on amsdsfaf to public ; 
