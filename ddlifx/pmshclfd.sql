create table pmshclaf
(
  pmhlhcpc    char(10) default ' ' not null,
  pmhlhcpr    char(10) default ' ' not null,
  pmhltype    char(1) default ' ' not null,
  pmhljpdt    char(8) default ' ' not null,
  pmhllpdt    char(8) default ' ' not null,
  pmhlprmk    char(1) default ' ' not null,
  pmhlprv1    char(10) default ' ' not null,
  pmhlprv2    char(10) default ' ' not null,
  pmhlprv3    char(10) default ' ' not null,
  pmhlprv4    char(10) default ' ' not null,
  pmhlprv5    char(10) default ' ' not null,
  pmhlstat    char(1) default ' ' not null,
  pmhlcdte    char(8) default ' ' not null,
  pmhlctim    char(8) default ' ' not null,
  pmhlwebc    char(10) default ' ' not null,
  pmhllupd    char(8) default ' ' not null,
  pmhllupt    char(8) default ' ' not null,
  pmhlwebu    char(10) default ' ' not null,
  pmhlspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index pmshcla1 on pmshclaf
(
pmhlhcpc,
pmhlhcpr
);
create unique index pmshcla2 on pmshclaf
(
pmhlhcpr,
pmhlhcpc
);
create unique index pmshcla3 on pmshclaf
(
pmhlprv1,
pmhlhcpc,
pmhlhcpr
);
create unique index pmshcla4 on pmshclaf
(
pmhlcdte,
pmhlctim,
pmhlhcpc,
pmhlhcpr
);
create unique index pmshcla5 on pmshclaf
(
pmhllupd,
pmhllupt,
pmhlhcpc,
pmhlhcpr
);
revoke all on pmshclaf from public ; 
grant select on pmshclaf to public ; 
