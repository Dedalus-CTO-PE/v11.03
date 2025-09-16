create table sinoqbaf
(
  siqbcst     varchar2(5) default ' ' not null,
  siqbrid     varchar2(8) default ' ' not null,
  siqblin     varchar2(3) default ' ' not null,
  siqbcom     varchar2(60) default ' ' not null,
  siqbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinoqba1 primary key( 
siqbcst,
siqbrid,
siqblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
