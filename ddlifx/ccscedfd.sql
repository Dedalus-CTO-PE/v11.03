create table ccscedaf
(
  ccedlv1     char(10) default ' ' not null,
  ccedlv2     char(10) default ' ' not null,
  ccednep     decimal(6,0) default 0 not null,
  ccedftc     decimal(16,4) default 0 not null,
  ccedfmn     decimal(14,2) default 0 not null,
  ccedfmx     decimal(14,2) default 0 not null,
  ccedfsv     decimal(16,4) default 0 not null,
  ccedttc     decimal(16,4) default 0 not null,
  ccedtmn     decimal(14,2) default 0 not null,
  ccedtmx     decimal(14,2) default 0 not null,
  ccedtsv     decimal(16,4) default 0 not null,
  ccedlto     decimal(14,2) default 0 not null,
  ccedlmn     decimal(14,2) default 0 not null,
  ccedlmx     decimal(14,2) default 0 not null,
  ccedlsv     decimal(16,4) default 0 not null,
  ccedspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsceda1 on ccscedaf
(
ccedlv1,
ccedlv2
);
revoke all on ccscedaf from public ; 
grant select on ccscedaf to public ; 
