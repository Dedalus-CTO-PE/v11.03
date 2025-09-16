create table ccscmeaf
(
  ccmehcd     varchar2(2) default ' ' not null,
  ccmedpt     varchar2(8) default ' ' not null,
  ccmeyear    varchar2(4) default ' ' not null,
  ccmeper     varchar2(2) default ' ' not null,
  ccmepcd     varchar2(8) default ' ' not null,
  ccmeqty     number(12,2) default 0 not null,
  ccmecst     number(18,6) default 0 not null,
  ccmeflx     number(18,6) default 0 not null,
  ccmespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmea1 primary key( 
ccmehcd,
ccmedpt,
ccmeyear,
ccmeper,
ccmepcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscmea2 on ccscmeaf
(
ccmehcd,
ccmedpt,
ccmepcd,
ccmeyear,
ccmeper
)
  tablespace pas_indx; 
