create table sincgbaf
(
  sigbcom     varchar2(6) default ' ' not null,
  sigbdat     varchar2(6) default ' ' not null,
  sigbuam     number(14,2) default 0 not null,
  sigbubd     number(14,2) default 0 not null,
  sigbpam     number(14,2) default 0 not null,
  sigbpbd     number(14,2) default 0 not null,
  sigbram     number(14,2) default 0 not null,
  sigbrbd     number(14,2) default 0 not null,
  sigbspa     varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincgba1 primary key( 
sigbcom,
sigbdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
