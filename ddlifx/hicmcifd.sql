create table hicmciaf
(
  hcmcmcid    char(8) default ' ' not null,
  hcmccntr    decimal(3,0) default 0 not null,
  lf          char(1)
);
create unique index hicmcia1 on hicmciaf
(
hcmcmcid
);
revoke all on hicmciaf from public ; 
grant select on hicmciaf to public ; 
