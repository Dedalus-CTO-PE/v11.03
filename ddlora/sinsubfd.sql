create table sinsubaf
(
  sisbsub     varchar2(5) default ' ' not null,
  sisbdat     varchar2(6) default ' ' not null,
  sisbuam     number(14,2) default 0 not null,
  sisbubd     number(14,2) default 0 not null,
  sisbpam     number(14,2) default 0 not null,
  sisbpbd     number(14,2) default 0 not null,
  sisbram     number(14,2) default 0 not null,
  sisbrbd     number(14,2) default 0 not null,
  sisbspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinsuba1 primary key( 
sisbsub,
sisbdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
