create table emrdocaf
(
  emdodoc     varchar2(10) default ' ' not null,
  emdodnm     varchar2(25) default ' ' not null,
  emdodin     varchar2(3) default ' ' not null,
  emdoact     varchar2(1) default ' ' not null,
  emdospa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrdoca1 primary key( 
emdodoc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrdoca2 on emrdocaf
(
emdodnm,
emdodoc
)
  tablespace pas_indx; 
