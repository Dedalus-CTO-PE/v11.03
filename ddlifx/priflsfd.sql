create table priflsaf
(
  prflseid    char(4) default ' ' not null,
  prflsedc    char(35) default ' ' not null,
  prfldbfr    char(8) default ' ' not null,
  prfldbto    char(8) default ' ' not null,
  prflsnfr    char(20) default ' ' not null,
  prflsnto    char(20) default ' ' not null,
  prflvdfr    char(8) default ' ' not null,
  prflvdto    char(8) default ' ' not null,
  prflppfr    char(6) default ' ' not null,
  prflppto    char(6) default ' ' not null,
  prflsdfr    char(10) default ' ' not null,
  prflsdto    char(10) default ' ' not null,
  prflccfr    char(3) default ' ' not null,
  prflccto    char(3) default ' ' not null,
  prflllfr    char(3) default ' ' not null,
  prflllto    char(3) default ' ' not null,
  prfldlfr    char(8) default ' ' not null,
  prfldlto    char(8) default ' ' not null,
  prflfcfr    char(3) default ' ' not null,
  prflfcto    char(3) default ' ' not null,
  prflfdfr    char(8) default ' ' not null,
  prflfdto    char(8) default ' ' not null,
  prflmbal    decimal(9,2) default 0 not null,
  prflidfr    char(8) default ' ' not null,
  prflidto    char(8) default ' ' not null,
  prflltyp    char(3) default ' ' not null,
  prflscan    char(1) default ' ' not null,
  prflspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index priflsa1 on priflsaf
(
prflseid
);
revoke all on priflsaf from public ; 
grant select on priflsaf to public ; 
