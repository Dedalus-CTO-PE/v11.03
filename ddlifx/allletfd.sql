create table allletaf
(
  dalltltn    char(3) default ' ' not null,
  dalltlin    char(3) default ' ' not null,
  allttext    char(70) default ' ' not null,
  alltlvar    decimal(1,0) default 0 not null,
  alltpbot    decimal(2,0) default 0 not null,
  alltptop    decimal(2,0) default 0 not null,
  alltppag    decimal(3,0) default 0 not null,
  alltptab    decimal(2,0) default 0 not null,
  alltmmfn    char(8) default ' ' not null,
  allttype    char(1) default ' ' not null,
  alltactv    char(1) default ' ' not null,
  alltspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index allletr1 on allletaf
(
dalltltn,
dalltlin
);
create unique index allletr2 on allletaf
(
dalltlin,
dalltltn
);
revoke all on allletaf from public ; 
grant select on allletaf to public ; 
