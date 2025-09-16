create table fmsjpdaf
(
  fmjpbat     char(5) default ' ' not null,
  fmjpjty     char(1) default ' ' not null,
  fmjpjid     char(6) default ' ' not null,
  fmjppdat    char(8) default ' ' not null,
  fmjpcdat    char(8) default ' ' not null,
  fmjpudat    char(8) default ' ' not null,
  fmjpdat     char(8) default ' ' not null,
  fmjptyp     decimal(1,0) default 0 not null,
  fmjprev     decimal(1,0) default 0 not null,
  fmjpdtot    decimal(14,2) default 0 not null,
  fmjpauth    char(1) default ' ' not null,
  fmjpspar    char(21) default ' ' not null,
  lf          char(1)
);
create unique index fmsjpda1 on fmsjpdaf
(
fmjpbat
);
create unique index fmsjpda2 on fmsjpdaf
(
fmjpjty,
fmjpjid,
fmjpbat
);
create unique index fmsjpda3 on fmsjpdaf
(
fmjpauth,
fmjpbat
);
revoke all on fmsjpdaf from public ; 
grant select on fmsjpdaf to public ; 
