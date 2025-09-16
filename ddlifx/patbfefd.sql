create table patbfeef
(
  bfclm       char(3) default ' ' not null,
  bfhfund     char(6) default ' ' not null,
  ptbfhtyp    char(3) default ' ' not null,
  bfatype     char(3) default ' ' not null,
  bfbtype     char(3) default ' ' not null,
  dbfenddy    char(3) default ' ' not null,
  bfpat       decimal(14,2) default 0 not null,
  bfhf        decimal(14,2) default 0 not null,
  bfninv      decimal(1,0) default 0 not null,
  bfdesc      char(30) default ' ' not null,
  ptbfcnid    char(6) default ' ' not null,
  bfspare     char(21) default ' ' not null,
  lf          char(1)
);
create unique index patbfee1 on patbfeef
(
bfclm,
bfhfund,
ptbfhtyp,
bfatype,
bfbtype,
ptbfcnid,
dbfenddy
);
create unique index patbfee2 on patbfeef
(
bfclm,
bfhfund,
bfatype,
bfbtype,
ptbfhtyp,
ptbfcnid,
dbfenddy
);
create unique index patbfee3 on patbfeef
(
ptbfcnid,
bfclm,
bfhfund,
ptbfhtyp,
bfatype,
bfbtype,
dbfenddy
);
revoke all on patbfeef from public ; 
grant select on patbfeef to public ; 
