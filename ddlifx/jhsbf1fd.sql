create table newbfeaf
(
  bfclm       char(3) default ' ' not null,
  bfhfund     char(6) default ' ' not null,
  bfhftab     char(8) default ' ' not null,
  bfatype     char(3) default ' ' not null,
  bfbtype     char(3) default ' ' not null,
  dbfenddy    char(3) default ' ' not null,
  bfpat       decimal(14,2) default 0 not null,
  bfhf        decimal(14,2) default 0 not null,
  bfninv      decimal(1,0) default 0 not null,
  bfdesc      char(30) default ' ' not null,
  bfhdp       char(4) default ' ' not null,
  bfspare     char(18) default ' ' not null,
  lf          char(1)
);
create unique index jhsbf1a1 on newbfeaf
(
bfclm,
bfhfund,
bfhftab,
bfatype,
bfbtype,
dbfenddy
);
revoke all on newbfeaf from public ; 
grant select on newbfeaf to public ; 
