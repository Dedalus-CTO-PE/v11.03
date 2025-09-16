create table outlpcaf
(
  otlpsche    char(5) default ' ' not null,
  otlpurno    char(8) default ' ' not null,
  otlpbook    char(8) default ' ' not null,
  otlpsite    char(6) default ' ' not null,
  otlpclin    char(6) default ' ' not null,
  otlpsdat    char(8) default ' ' not null,
  otlpstim    char(8) default ' ' not null,
  otlpslot    char(3) default ' ' not null,
  otlpprnt    char(6) default ' ' not null,
  otlpcopy    decimal(3,0) default 0 not null,
  otlpstat    char(6) default ' ' not null,
  otlplett    char(3) default ' ' not null,
  otlpptyp    char(1) default ' ' not null,
  otlpwebu    char(10) default ' ' not null,
  otlprdat    char(8) default ' ' not null,
  otlprtim    char(8) default ' ' not null,
  otlpsers    char(1) default ' ' not null,
  otlpspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index outlpca1 on outlpcaf
(
otlpsche
);
revoke all on outlpcaf from public ; 
grant select on outlpcaf to public ; 
