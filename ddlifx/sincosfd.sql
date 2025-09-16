create table sincosaf
(
sicocat     char(7),
sicosup     char(5),
sicosut     char(15),
sicodat     char(8),
sicoopr     decimal(14,2),
siconpr     decimal(14,2),
sicospa     char(20),
lf          char(1)
);
create unique index sincosa1 on sincosaf
(
sicocat,
sicosup,
sicosut,
sicodat
);
revoke all on sincosaf from public ; 
grant select on sincosaf to public ; 
