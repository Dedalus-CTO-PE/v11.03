create table ccixgdaf
(
  ccxdprid    char(8) default ' ' not null,
  ccxdscid    char(2) default ' ' not null,
  ccxduniq    char(3) default ' ' not null,
  ccxdcod1    char(9) default ' ' not null,
  ccxdcod2    char(9) default ' ' not null,
  ccxdcod3    char(9) default ' ' not null,
  ccxddept    char(3) default ' ' not null,
  ccxdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccixgda1 on ccixgdaf
(
ccxdprid,
ccxdscid,
ccxduniq,
ccxdcod1,
ccxdcod2,
ccxdcod3
);
revoke all on ccixgdaf from public ; 
grant select on ccixgdaf to public ; 
