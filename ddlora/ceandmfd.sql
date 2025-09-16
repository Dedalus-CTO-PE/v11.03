create table ceandmaf
(
  cenddrgc    varchar2(4) default ' ' not null,
  cendfc1     number(10,4) default 0 not null,
  cendfc2     number(10,4) default 0 not null,
  cendfc3     number(10,4) default 0 not null,
  cendfc4     number(10,4) default 0 not null,
  cendfc5     number(10,4) default 0 not null,
  cendspa     varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceandma1 primary key( 
cenddrgc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
