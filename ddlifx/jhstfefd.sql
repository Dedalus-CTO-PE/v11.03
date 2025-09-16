create table jhstfeaf
(
  tfclm       char(3) default ' ' not null,
  tfhfund     char(6) default ' ' not null,
  tfhftab     char(8) default ' ' not null,
  tfdayc      char(1) default ' ' not null,
  tfendmbs    char(5) default ' ' not null,
  tfhf1       decimal(14,2) default 0 not null,
  tfpat1      decimal(14,2) default 0 not null,
  tfhf2       decimal(14,2) default 0 not null,
  tfpat2      decimal(14,2) default 0 not null,
  tfhf3       decimal(14,2) default 0 not null,
  tfpat3      decimal(14,2) default 0 not null,
  tfhf4       decimal(14,2) default 0 not null,
  tfpat4      decimal(14,2) default 0 not null,
  tfhf5       decimal(14,2) default 0 not null,
  tfpat5      decimal(14,2) default 0 not null,
  tfhf6       decimal(14,2) default 0 not null,
  tfpat6      decimal(14,2) default 0 not null,
  tfninv      decimal(1,0) default 0 not null,
  tfspare     char(11) default ' ' not null,
  lf          char(1)
);
create unique index jhstfea1 on jhstfeaf
(
tfclm,
tfhfund,
tfhftab,
tfdayc,
tfendmbs
);
revoke all on jhstfeaf from public ; 
grant select on jhstfeaf to public ; 
