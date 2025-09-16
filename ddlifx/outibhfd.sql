create table outibhaf
(
  otibbthn    char(8) default ' ' not null,
  otibbhtl    decimal(14,2) default 0 not null,
  otibtrib    decimal(6,0) default 0 not null,
  otibdtbc    char(8) default ' ' not null,
  otibtmbc    char(8) default ' ' not null,
  otiboper    char(10) default ' ' not null,
  otibefnm    char(18) default ' ' not null,
  otiblocn    char(8) default ' ' not null,
  otibsnid    char(60) default ' ' not null,
  otibspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index outibha1 on outibhaf
(
otibbthn
);
create unique index outibha2 on outibhaf
(
otibdtbc,
otibbthn
);
revoke all on outibhaf from public ; 
grant select on outibhaf to public ; 
