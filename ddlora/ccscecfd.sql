create table ccscecaf
(
  ccechcd     varchar2(2) default ' ' not null,
  cceceps     varchar2(16) default ' ' not null,
  cceclv1     varchar2(10) default ' ' not null,
  cceclv2     varchar2(10) default ' ' not null,
  cceclv3     varchar2(10) default ' ' not null,
  ccecftc     number(14,2) default 0 not null,
  ccecttc     number(14,2) default 0 not null,
  cceclos     number(6,0) default 0 not null,
  ccecexc     varchar2(1) default ' ' not null,
  ccecspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsceca1 primary key( 
ccechcd,
cceceps)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccsceca2 on ccscecaf
(
cceclv1,
cceclv2,
cceclv3,
ccechcd,
cceceps
)
  tablespace pas_indx; 
