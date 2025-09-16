create table ccsipraf
(
  ccipdrgc    varchar2(4) default ' ' not null,
  ccippri     number(14,2) default 0 not null,
  ccipspa     varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsipra1 primary key( 
ccipdrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
