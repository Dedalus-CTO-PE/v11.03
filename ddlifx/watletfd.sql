create table watletrf
(
  dwletno     char(3) default ' ' not null,
  dwlinno     char(3) default ' ' not null,
  wltext      char(70) default ' ' not null,
  wlvar       decimal(1,0) default 0 not null,
  wletpbot    decimal(2,0) default 0 not null,
  wletptop    decimal(2,0) default 0 not null,
  wletppag    decimal(3,0) default 0 not null,
  wletptab    decimal(2,0) default 0 not null,
  wletmmfn    char(8) default ' ' not null,
  wletvald    char(1) default ' ' not null,
  wletaudl    char(1) default ' ' not null,
  wletactv    char(1) default ' ' not null,
  wletcomm    char(1) default ' ' not null,
  wletconf    char(1) default ' ' not null,
  wletspar    char(47) default ' ' not null,
  lf          char(1)
);
create unique index watletr1 on watletrf
(
dwletno,
dwlinno
);
create unique index watletr2 on watletrf
(
dwlinno,
dwletno
);
create unique index watletr3 on watletrf
(
dwlinno,
wltext,
dwletno
);
revoke all on watletrf from public ; 
grant select on watletrf to public ; 
