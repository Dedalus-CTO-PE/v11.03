create table sinpobaf
(
  sipbpon     varchar2(7) default ' ' not null,
  sipblin     varchar2(3) default ' ' not null,
  sipbcom     varchar2(60) default ' ' not null,
  sipbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpoba1 primary key( 
sipbpon,
sipblin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
