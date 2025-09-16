create table ccscmaaf
(
  ccmacom     varchar2(4) default ' ' not null,
  ccmades     varchar2(35) default ' ' not null,
  ccmaur1     varchar2(15) default ' ' not null,
  ccmaur2     varchar2(15) default ' ' not null,
  ccmaud1     varchar2(8) default ' ' not null,
  ccmaud2     varchar2(8) default ' ' not null,
  ccmauc1     varchar2(3) default ' ' not null,
  ccmauc2     varchar2(3) default ' ' not null,
  ccmauy1     varchar2(1) default ' ' not null,
  ccmauy2     varchar2(1) default ' ' not null,
  ccmaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmaa1 primary key( 
ccmacom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
