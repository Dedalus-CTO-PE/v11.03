create table ccshlcaf
(
  cchlhcd     char(2) default ' ' not null,
  cchlpma     char(30) default ' ' not null,
  cchlptr     char(30) default ' ' not null,
  cchlpmi     char(30) default ' ' not null,
  cchlpds     char(30) default ' ' not null,
  cchlpvi     char(30) default ' ' not null,
  cchlpmo     char(30) default ' ' not null,
  cchlpmd     char(30) default ' ' not null,
  cchlade     char(30) default ' ' not null,
  cchladi     char(30) default ' ' not null,
  cchlosi     char(30) default ' ' not null,
  cchlobb     char(30) default ' ' not null,
  cchlcdp     char(30) default ' ' not null,
  cchlpmx     char(30) default ' ' not null,
  cchlpin     char(30) default ' ' not null,
  cchlpdt     char(30) default ' ' not null,
  cchlpcd     char(30) default ' ' not null,
  cchlpmb     char(30) default ' ' not null,
  cchlpdc     char(30) default ' ' not null,
  cchlpic     char(30) default ' ' not null,
  cchlarf     char(30) default ' ' not null,
  cchlenc     char(30) default ' ' not null,
  cchlevs     char(30) default ' ' not null,
  cchlopr     char(30) default ' ' not null,
  cchlspa     char(120) default ' ' not null,
  lf          char(1)
);
create unique index ccshlca1 on ccshlcaf
(
cchlhcd
);
revoke all on ccshlcaf from public ; 
grant select on ccshlcaf to public ; 
