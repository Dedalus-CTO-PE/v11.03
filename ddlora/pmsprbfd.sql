create table pmsprbaf
(
  pmpburno    varchar2(8) default ' ' not null,
  pmpbpnum    varchar2(5) default ' ' not null,
  pmpbspin    varchar2(1) default ' ' not null,
  pmpbppno    varchar2(5) default ' ' not null,
  pmpbprid    varchar2(3) default ' ' not null,
  pmpbprty    varchar2(3) default ' ' not null,
  pmpbactv    varchar2(1) default ' ' not null,
  pmpbprst    varchar2(3) default ' ' not null,
  pmpbdsc1    varchar2(50) default ' ' not null,
  pmpbdsc2    varchar2(50) default ' ' not null,
  pmpbdcsy    varchar2(5) default ' ' not null,
  pmpbdcod    varchar2(10) default ' ' not null,
  pmpbesdt    varchar2(8) default ' ' not null,
  pmpbesti    varchar2(5) default ' ' not null,
  pmpbesby    varchar2(10) default ' ' not null,
  pmpberdt    varchar2(8) default ' ' not null,
  pmpberti    varchar2(5) default ' ' not null,
  pmpbardt    varchar2(8) default ' ' not null,
  pmpbarti    varchar2(5) default ' ' not null,
  pmpbrvst    varchar2(3) default ' ' not null,
  pmpbnrdt    varchar2(8) default ' ' not null,
  pmpbnrti    varchar2(5) default ' ' not null,
  pmpbudc1    varchar2(3) default ' ' not null,
  pmpbudc2    varchar2(3) default ' ' not null,
  pmpbudy1    varchar2(1) default ' ' not null,
  pmpbudy2    varchar2(1) default ' ' not null,
  pmpbudd1    varchar2(8) default ' ' not null,
  pmpbudd2    varchar2(8) default ' ' not null,
  pmpbudt1    varchar2(5) default ' ' not null,
  pmpbudt2    varchar2(5) default ' ' not null,
  pmpblvis    varchar2(8) default ' ' not null,
  pmpbspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsprba1 primary key( 
pmpburno,
pmpbpnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsprbaf for pmsprbaf;
create unique index pmsprba2 on pmsprbaf
(
pmpbnrdt,
pmpburno,
pmpbpnum
)
  tablespace pas_indx; 
create unique index pmsprba3 on pmsprbaf
(
pmpblvis,
pmpburno,
pmpbpnum
)
  tablespace pas_indx; 
