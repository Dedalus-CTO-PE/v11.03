create table ccscmdaf
(
  ccmdhcd     varchar2(2) default ' ' not null,
  ccmddpt     varchar2(8) default ' ' not null,
  ccmdyear    varchar2(4) default ' ' not null,
  ccmdper     varchar2(2) default ' ' not null,
  ccmdpcd     varchar2(8) default ' ' not null,
  ccmdcty     varchar2(4) default ' ' not null,
  ccmdcst     number(18,6) default 0 not null,
  ccmdflx     number(18,6) default 0 not null,
  ccmdrvi     number(18,6) default 0 not null,
  ccmdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmda1 primary key( 
ccmdhcd,
ccmddpt,
ccmdyear,
ccmdper,
ccmdpcd,
ccmdcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
