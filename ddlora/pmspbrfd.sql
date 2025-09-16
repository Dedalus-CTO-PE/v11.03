create table pmspbraf
(
  pmpbadmn    varchar2(8) default ' ' not null,
  pmpbclty    varchar2(3) default ' ' not null,
  pmpbdeft    varchar2(1) default ' ' not null,
  pmpbcntr    varchar2(3) default ' ' not null,
  pmpbicnt    varchar2(3) default ' ' not null,
  pmpbitem    varchar2(9) default ' ' not null,
  pmpbefdt    varchar2(8) default ' ' not null,
  pmpbetdt    varchar2(8) default ' ' not null,
  pmpbregm    varchar2(10) default ' ' not null,
  pmpbmaxb    number(14,2) default 0 not null,
  pmpbmaxd    number(14,2) default 0 not null,
  pmpbcuid    varchar2(10) default ' ' not null,
  pmpbcdat    varchar2(8) default ' ' not null,
  pmpbctim    varchar2(8) default ' ' not null,
  pmpbuuid    varchar2(10) default ' ' not null,
  pmpbudat    varchar2(8) default ' ' not null,
  pmpbutim    varchar2(8) default ' ' not null,
  pmpbspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmspbra1 primary key( 
pmpbadmn,
pmpbclty,
pmpbefdt,
pmpbicnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmspbra2 on pmspbraf
(
pmpbadmn,
pmpbitem,
pmpbclty,
pmpbefdt,
pmpbicnt
)
  tablespace pas_indx; 
create unique index pmspbra3 on pmspbraf
(
pmpbadmn,
pmpbclty,
pmpbefdt,
pmpbdeft,
pmpbicnt
)
  tablespace pas_indx; 
create unique index pmspbra4 on pmspbraf
(
pmpbadmn,
pmpbicnt,
pmpbdeft,
pmpbcntr,
pmpbclty,
pmpbefdt
)
  tablespace pas_indx; 
