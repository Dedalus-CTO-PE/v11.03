create table sinaudba
(
sibaaudd    char(8),
sibaaudt    char(8),
sibaaudp    char(2),
sibaaudr    char(1),
sibaauds    decimal(1,0),
sibaaudo    char(4),
sibacst     char(5),
sibacat     char(7),
sibareq     char(8),
sibawar     char(5),
sibadat     char(8),
sibaqty     decimal(12,2),
sibaresi    char(10),
sibaspa     char(10),
lf          char(1)
);
create index sinaudba on sinaudba
(
sibaaudd,
sibaaudt,
sibaaudp,
sibaaudr
);
revoke all on sinaudba from public ; 
grant select on sinaudba to public ; 
create table sinbacaf
(
sibacst     char(5),
sibacat     char(7),
sibareq     char(8),
sibawar     char(5),
sibadat     char(8),
sibaqty     decimal(12,2),
sibaresi    char(10),
sibaspa     char(10),
lf          char(1)
);
create unique index sinbaca1 on sinbacaf
(
sibacst,
sibacat,
sibareq,
sibawar
);
create unique index sinbaca2 on sinbacaf
(
sibawar,
sibacat,
sibacst,
sibareq
);
create unique index sinbaca3 on sinbacaf
(
sibacat,
sibawar,
sibacst,
sibareq
);
revoke all on sinbacaf from public ; 
grant select on sinbacaf to public ; 
