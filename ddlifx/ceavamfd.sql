create table ceavamaf
(
  cevadoc     char(6) default ' ' not null,
  cevaspc     char(3) default ' ' not null,
  cevapsc     char(7) default ' ' not null,
  cevaqty     decimal(8,2) default 0 not null,
  cevaspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceavama1 on ceavamaf
(
cevadoc,
cevaspc,
cevapsc
);
revoke all on ceavamaf from public ; 
grant select on ceavamaf to public ; 
