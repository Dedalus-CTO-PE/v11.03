create table ccsrasaf
(
  ccramid     varchar2(3) default ' ' not null,
  ccrahcd     varchar2(2) default ' ' not null,
  ccradpt     varchar2(8) default ' ' not null,
  ccrapcd     varchar2(8) default ' ' not null,
  ccrafdr     number(18,6) default 0 not null,
  ccrafid     number(18,6) default 0 not null,
  ccravdr     number(18,6) default 0 not null,
  ccravid     number(18,6) default 0 not null,
  ccraqty     number(14,2) default 0 not null,
  ccraspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsrasa1 primary key( 
ccramid,
ccrahcd,
ccradpt,
ccrapcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
