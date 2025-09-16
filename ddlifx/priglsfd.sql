create table priglsaf
(
  prglseid    char(4) default ' ' not null,
  prglsedc    char(35) default ' ' not null,
  prgldbfr    char(8) default ' ' not null,
  prgldbto    char(8) default ' ' not null,
  prglsnfr    char(20) default ' ' not null,
  prglsnto    char(20) default ' ' not null,
  prglvdfr    char(8) default ' ' not null,
  prglvdto    char(8) default ' ' not null,
  prglppfr    char(6) default ' ' not null,
  prglppto    char(6) default ' ' not null,
  prglsdfr    char(10) default ' ' not null,
  prglsdto    char(10) default ' ' not null,
  prglccfr    char(3) default ' ' not null,
  prglccto    char(3) default ' ' not null,
  prglltyp    char(3) default ' ' not null,
  prglscan    char(1) default ' ' not null,
  prglspar    char(22) default ' ' not null,
  lf          char(1)
);
create unique index priglsa1 on priglsaf
(
prglseid
);
revoke all on priglsaf from public ; 
grant select on priglsaf to public ; 
