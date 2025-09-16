create table ccspnoaf
(
  ccpnhcd     varchar2(2) default ' ' not null,
  ccpndpt     varchar2(8) default ' ' not null,
  ccpnpcd     varchar2(8) default ' ' not null,
  ccpnlin     varchar2(3) default ' ' not null,
  ccpndat     varchar2(70) default ' ' not null,
  ccpnspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspnoa1 primary key( 
ccpnhcd,
ccpndpt,
ccpnpcd,
ccpnlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
