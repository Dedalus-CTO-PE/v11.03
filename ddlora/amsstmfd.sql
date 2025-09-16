create table amsstmaf
(
  amsmstk     varchar2(5) default ' ' not null,
  amsmdat     varchar2(8) default ' ' not null,
  amsmtim     varchar2(5) default ' ' not null,
  amsmopr     varchar2(4) default ' ' not null,
  amsmfbld    varchar2(3) default ' ' not null,
  amsmtbld    varchar2(3) default ' ' not null,
  amsmfloc    varchar2(6) default ' ' not null,
  amsmtloc    varchar2(6) default ' ' not null,
  amsmftyp    varchar2(3) default ' ' not null,
  amsmttyp    varchar2(3) default ' ' not null,
  amsmfdpt    varchar2(3) default ' ' not null,
  amsmtdpt    varchar2(3) default ' ' not null,
  amsmfsdt    varchar2(8) default ' ' not null,
  amsmtsdt    varchar2(8) default ' ' not null,
  amsmcom     varchar2(30) default ' ' not null,
  amsmur1     varchar2(30) default ' ' not null,
  amsmur2     varchar2(30) default ' ' not null,
  amsmud1     varchar2(8) default ' ' not null,
  amsmud2     varchar2(8) default ' ' not null,
  amsmuy1     varchar2(1) default ' ' not null,
  amsmuy2     varchar2(1) default ' ' not null,
  amsmspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsstma1 primary key( 
amsmstk)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
