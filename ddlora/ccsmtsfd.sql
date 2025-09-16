create table ccsmtsaf
(
  ccmtyear    varchar2(4) default ' ' not null,
  ccmtcom     varchar2(4) default ' ' not null,
  ccmthcd     varchar2(2) default ' ' not null,
  ccmtdpt     varchar2(8) default ' ' not null,
  ccmtpcd     varchar2(8) default ' ' not null,
  ccmtuct     number(16,4) default 0 not null,
  ccmtqty     number(14,2) default 0 not null,
  ccmtcst     number(14,2) default 0 not null,
  ccmtfix     number(1,0) default 0 not null,
  ccmtfuc     number(16,4) default 0 not null,
  ccmtspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsmtsa1 primary key( 
ccmtyear,
ccmtcom,
ccmthcd,
ccmtdpt,
ccmtpcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
