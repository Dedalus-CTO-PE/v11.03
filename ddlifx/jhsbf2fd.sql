create table oldbfeaf
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
create unique index jhsbf2a1 on oldbfeaf
(
bfclm,
bfhfund,
bfhftab,
bfatype,
bfbtype,
dbfenddy
);
create unique index jhsbf2a2 on oldbfeaf
(
bfclm,
bfhfund,
bfatype,
bfbtype,
bfhftab,
dbfenddy
);
create unique index jhsbf2a3 on oldbfeaf
(
bfhfund,
bfhftab,
bfclm,
bfatype,
bfbtype,
dbfenddy
);
revoke all on oldbfeaf from public ; 
grant select on oldbfeaf to public ; 
