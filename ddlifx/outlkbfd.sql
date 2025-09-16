create table outlkbaf
(
otlkurno    char(8),
otlkobok    char(8),
otlklbok    char(8),
otlkbsta    char(1),
otlkssta    char(1),
otlkldat    char(8),
otlkltim    char(8),
otlkluid    char(10),
otlkudat    char(8),
otlkutim    char(8),
otlkuuid    char(10),
otlkspar    char(80),
lf          char(1)
);
create unique index outlkba1 on outlkbaf
(
otlkurno,
otlkobok,
otlklbok
);
create unique index outlkba2 on outlkbaf
(
otlkurno,
otlklbok,
otlkobok
);
revoke all on outlkbaf from public ; 
grant select on outlkbaf to public ; 
