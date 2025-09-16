create table outletrf
(
  dotltltn    char(3) default ' ' not null,
  dotltlin    char(3) default ' ' not null,
  otlttext    char(70) default ' ' not null,
  otltlvar    decimal(1,0) default 0 not null,
  otltpbot    decimal(2,0) default 0 not null,
  otltptop    decimal(2,0) default 0 not null,
  otltppag    decimal(3,0) default 0 not null,
  otltptab    decimal(2,0) default 0 not null,
  otltmmfn    char(8) default ' ' not null,
  otlttype    char(1) default ' ' not null,
  otltactv    char(1) default ' ' not null,
  otltcomm    char(1) default ' ' not null,
  otltconf    char(1) default ' ' not null,
  otltspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index outletr1 on outletrf
(
dotltltn,
dotltlin
);
create unique index outletr2 on outletrf
(
dotltlin,
dotltltn
);
revoke all on outletrf from public ; 
grant select on outletrf to public ; 
