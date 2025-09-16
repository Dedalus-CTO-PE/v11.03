create table ceavbmaf
(
  cevbdty     char(3) default ' ' not null,
  cevbspc     char(3) default ' ' not null,
  cevbpsc     char(7) default ' ' not null,
  cevbqty     decimal(8,2) default 0 not null,
  cevbspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceavbma1 on ceavbmaf
(
cevbdty,
cevbspc,
cevbpsc
);
revoke all on ceavbmaf from public ; 
grant select on ceavbmaf to public ; 
