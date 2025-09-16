create table ccshlcaf
(
  cchlhcd     varchar2(2) default ' ' not null,
  cchlpma     varchar2(30) default ' ' not null,
  cchlptr     varchar2(30) default ' ' not null,
  cchlpmi     varchar2(30) default ' ' not null,
  cchlpds     varchar2(30) default ' ' not null,
  cchlpvi     varchar2(30) default ' ' not null,
  cchlpmo     varchar2(30) default ' ' not null,
  cchlpmd     varchar2(30) default ' ' not null,
  cchlade     varchar2(30) default ' ' not null,
  cchladi     varchar2(30) default ' ' not null,
  cchlosi     varchar2(30) default ' ' not null,
  cchlobb     varchar2(30) default ' ' not null,
  cchlcdp     varchar2(30) default ' ' not null,
  cchlpmx     varchar2(30) default ' ' not null,
  cchlpin     varchar2(30) default ' ' not null,
  cchlpdt     varchar2(30) default ' ' not null,
  cchlpcd     varchar2(30) default ' ' not null,
  cchlpmb     varchar2(30) default ' ' not null,
  cchlpdc     varchar2(30) default ' ' not null,
  cchlpic     varchar2(30) default ' ' not null,
  cchlarf     varchar2(30) default ' ' not null,
  cchlenc     varchar2(30) default ' ' not null,
  cchlevs     varchar2(30) default ' ' not null,
  cchlopr     varchar2(30) default ' ' not null,
  cchlspa     varchar2(120) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccshlca1 primary key( 
cchlhcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
