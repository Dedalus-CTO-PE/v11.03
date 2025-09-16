create table webpcbaf
(
  wbpbbthn    char(8) default ' ' not null,
  wbpbbhtl    decimal(14,2) default 0 not null,
  wbpbtrib    decimal(6,0) default 0 not null,
  wbpbdtbc    char(8) default ' ' not null,
  wbpbtmbc    char(8) default ' ' not null,
  wbpboper    char(10) default ' ' not null,
  wbpbefnm    char(18) default ' ' not null,
  wbpblocn    char(8) default ' ' not null,
  wbpbsnid    char(60) default ' ' not null,
  wbpbspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcba1 on webpcbaf
(
wbpbbthn
);
create unique index webpcba2 on webpcbaf
(
wbpbdtbc,
wbpbbthn
);
revoke all on webpcbaf from public ; 
grant select on webpcbaf to public ; 
