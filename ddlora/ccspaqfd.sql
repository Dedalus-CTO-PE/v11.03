create table ccspaqaf
(
  ccpaport    varchar2(2) default ' ' not null,
  ccpapcd     varchar2(8) default ' ' not null,
  ccpades     varchar2(35) default ' ' not null,
  ccpanum     number(10,2) default 0 not null,
  ccpastd     number(14,2) default 0 not null,
  ccpaact     number(14,2) default 0 not null,
  ccpabud     number(14,2) default 0 not null,
  ccpaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspaqa1 primary key( 
ccpaport,
ccpapcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
