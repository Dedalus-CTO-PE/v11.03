create table pmshadaf
(
  pmhdcntr    char(6) default ' ' not null,
  pmhdhacg    char(3) default ' ' not null,
  pmhdvalf    char(3) default ' ' not null,
  pmhdvalt    char(3) default ' ' not null,
  pmhdadjv    decimal(14,4) default 0 not null,
  pmhdcdat    char(8) default ' ' not null,
  pmhdctim    char(8) default ' ' not null,
  pmhdcuid    char(10) default ' ' not null,
  pmhdudat    char(8) default ' ' not null,
  pmhdutim    char(8) default ' ' not null,
  pmhduuid    char(10) default ' ' not null,
  pmhdspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmshada1 on pmshadaf
(
pmhdcntr,
pmhdhacg,
pmhdvalf
);
create unique index pmshada2 on pmshadaf
(
pmhdhacg,
pmhdcntr,
pmhdvalf
);
revoke all on pmshadaf from public ; 
grant select on pmshadaf to public ; 
