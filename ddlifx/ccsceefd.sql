create table ccsceeaf
(
  cceelv1     char(10) default ' ' not null,
  cceelv2     char(10) default ' ' not null,
  cceelv3     char(10) default ' ' not null,
  cceenep     decimal(6,0) default 0 not null,
  cceeftc     decimal(16,4) default 0 not null,
  cceefmn     decimal(14,2) default 0 not null,
  cceefmx     decimal(14,2) default 0 not null,
  cceefsv     decimal(16,4) default 0 not null,
  cceettc     decimal(16,4) default 0 not null,
  cceetmn     decimal(14,2) default 0 not null,
  cceetmx     decimal(14,2) default 0 not null,
  cceetsv     decimal(16,4) default 0 not null,
  cceelto     decimal(14,2) default 0 not null,
  cceelmn     decimal(14,2) default 0 not null,
  cceelmx     decimal(14,2) default 0 not null,
  cceelsv     decimal(16,4) default 0 not null,
  cceespa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsceea1 on ccsceeaf
(
cceelv1,
cceelv2,
cceelv3
);
revoke all on ccsceeaf from public ; 
grant select on ccsceeaf to public ; 
