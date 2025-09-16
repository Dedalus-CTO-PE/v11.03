create table amsdsfaf
(
  amdsreg     varchar2(2) default ' ' not null,
  amdsass     varchar2(12) default ' ' not null,
  amdsyear    varchar2(4) default ' ' not null,
  amdsg01     number(1,0) default 0 not null,
  amdsg02     number(1,0) default 0 not null,
  amdsg03     number(1,0) default 0 not null,
  amdsg04     number(1,0) default 0 not null,
  amdsg05     number(1,0) default 0 not null,
  amdsg06     number(1,0) default 0 not null,
  amdsg07     number(1,0) default 0 not null,
  amdsg08     number(1,0) default 0 not null,
  amdsg09     number(1,0) default 0 not null,
  amdsg10     number(1,0) default 0 not null,
  amdsg11     number(1,0) default 0 not null,
  amdsg12     number(1,0) default 0 not null,
  amdsg13     number(1,0) default 0 not null,
  amdsa01     number(14,2) default 0 not null,
  amdsa02     number(14,2) default 0 not null,
  amdsa03     number(14,2) default 0 not null,
  amdsa04     number(14,2) default 0 not null,
  amdsa05     number(14,2) default 0 not null,
  amdsa06     number(14,2) default 0 not null,
  amdsa07     number(14,2) default 0 not null,
  amdsa08     number(14,2) default 0 not null,
  amdsa09     number(14,2) default 0 not null,
  amdsa10     number(14,2) default 0 not null,
  amdsa11     number(14,2) default 0 not null,
  amdsa12     number(14,2) default 0 not null,
  amdsa13     number(14,2) default 0 not null,
  amdst01     number(14,2) default 0 not null,
  amdst02     number(14,2) default 0 not null,
  amdst03     number(14,2) default 0 not null,
  amdst04     number(14,2) default 0 not null,
  amdst05     number(14,2) default 0 not null,
  amdst06     number(14,2) default 0 not null,
  amdst07     number(14,2) default 0 not null,
  amdst08     number(14,2) default 0 not null,
  amdst09     number(14,2) default 0 not null,
  amdst10     number(14,2) default 0 not null,
  amdst11     number(14,2) default 0 not null,
  amdst12     number(14,2) default 0 not null,
  amdst13     number(14,2) default 0 not null,
  amdsaad     number(14,2) default 0 not null,
  amdstad     number(14,2) default 0 not null,
  amdsrvt     number(14,2) default 0 not null,
  amdstdt     varchar2(4) default ' ' not null,
  amdsadt     varchar2(4) default ' ' not null,
  amdsspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsdsfa1 primary key( 
amdsreg,
amdsass,
amdsyear)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsdsfa2 on amsdsfaf
(
amdsyear,
amdsreg,
amdsass
)
  tablespace pas_indx; 
