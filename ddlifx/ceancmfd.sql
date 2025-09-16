create table ceancmaf
(
  cencbty     char(3) default ' ' not null,
  cencspc     char(3) default ' ' not null,
  cencpsc     char(7) default ' ' not null,
  cencqty     decimal(8,2) default 0 not null,
  cencspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceancma1 on ceancmaf
(
cencbty,
cencspc,
cencpsc
);
revoke all on ceancmaf from public ; 
grant select on ceancmaf to public ; 
