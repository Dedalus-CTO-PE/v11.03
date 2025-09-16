create table prifigaf
(
  prfnyear    char(4) default ' ' not null,
  prfntype    char(1) default ' ' not null,
  prfncode    char(28) default ' ' not null,
  prfnpera    decimal(14,2) default 0 not null,
  prfnpr01    decimal(14,2) default 0 not null,
  prfnpr02    decimal(14,2) default 0 not null,
  prfnpr03    decimal(14,2) default 0 not null,
  prfnpr04    decimal(14,2) default 0 not null,
  prfnpr05    decimal(14,2) default 0 not null,
  prfnpr06    decimal(14,2) default 0 not null,
  prfnpr07    decimal(14,2) default 0 not null,
  prfnpr08    decimal(14,2) default 0 not null,
  prfnpr09    decimal(14,2) default 0 not null,
  prfnpr10    decimal(14,2) default 0 not null,
  prfnpr11    decimal(14,2) default 0 not null,
  prfnpr12    decimal(14,2) default 0 not null,
  prfnpr13    decimal(14,2) default 0 not null,
  prfnlast    decimal(14,2) default 0 not null,
  prfnmpra    char(6) default ' ' not null,
  prfnspar    char(4) default ' ' not null,
  lf          char(1)
);
create unique index prifiga1 on prifigaf
(
prfnyear,
prfntype,
prfncode,
prfnmpra
);
revoke all on prifigaf from public ; 
grant select on prifigaf to public ; 
