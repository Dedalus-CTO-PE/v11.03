create table ccscedaf
(
  ccedlv1     varchar2(10) default ' ' not null,
  ccedlv2     varchar2(10) default ' ' not null,
  ccednep     number(6,0) default 0 not null,
  ccedftc     number(16,4) default 0 not null,
  ccedfmn     number(14,2) default 0 not null,
  ccedfmx     number(14,2) default 0 not null,
  ccedfsv     number(16,4) default 0 not null,
  ccedttc     number(16,4) default 0 not null,
  ccedtmn     number(14,2) default 0 not null,
  ccedtmx     number(14,2) default 0 not null,
  ccedtsv     number(16,4) default 0 not null,
  ccedlto     number(14,2) default 0 not null,
  ccedlmn     number(14,2) default 0 not null,
  ccedlmx     number(14,2) default 0 not null,
  ccedlsv     number(16,4) default 0 not null,
  ccedspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsceda1 primary key( 
ccedlv1,
ccedlv2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
