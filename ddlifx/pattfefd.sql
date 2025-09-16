create table pattfeef
(
  tfclm       char(3) default ' ' not null,
  tfhfund     char(6) default ' ' not null,
  pttfhtyp    char(3) default ' ' not null,
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
  pttfcnid    char(6) default ' ' not null,
  tfspare     char(10) default ' ' not null,
  lf          char(1)
);
create unique index pattfee1 on pattfeef
(
tfclm,
tfhfund,
pttfhtyp,
tfdayc,
tfendmbs,
pttfcnid
);
create unique index pattfee2 on pattfeef
(
pttfcnid,
tfclm,
tfhfund,
pttfhtyp,
tfdayc,
tfendmbs
);
revoke all on pattfeef from public ; 
grant select on pattfeef to public ; 
