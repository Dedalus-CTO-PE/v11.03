create table outlhiaf
(
  otlhurno    char(8) default ' ' not null,
  otlhdate    char(8) default ' ' not null,
  dotlhlnu    char(3) default ' ' not null,
  dotlhout    char(8) default ' ' not null,
  otlhsite    char(6) default ' ' not null,
  otlhclin    char(6) default ' ' not null,
  otlhcdat    char(8) default ' ' not null,
  otlhctim    char(5) default ' ' not null,
  otlhslot    decimal(3,0) default 0 not null,
  otlhpuid    char(10) default ' ' not null,
  otlhspar    char(14) default ' ' not null,
  lf          char(1)
);
create unique index outlhia1 on outlhiaf
(
otlhurno,
otlhdate,
dotlhlnu,
dotlhout
);
revoke all on outlhiaf from public ; 
grant select on outlhiaf to public ; 
