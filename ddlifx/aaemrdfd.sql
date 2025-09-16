create table aaemrdaf
(
  daemrevn    char(8) default ' ' not null,
  aemrtype    char(1) default ' ' not null,
  daemruni    char(2) default ' ' not null,
  aemrcode    char(6) default ' ' not null,
  aemrdtcc    char(8) default ' ' not null,
  aemropcc    char(4) default ' ' not null,
  aemrspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index aaemrda1 on aaemrdaf
(
daemrevn,
aemrtype,
daemruni
);
revoke all on aaemrdaf from public ; 
grant select on aaemrdaf to public ; 
