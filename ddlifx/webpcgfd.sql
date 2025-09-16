create table webpcgaf
(
  wbpgclid    char(22) default ' ' not null,
  wbpgtrid    char(24) default ' ' not null,
  wbpgcntr    char(3) default ' ' not null,
  wbpgscnt    char(2) default ' ' not null,
  wbpgsvid    char(4) default ' ' not null,
  wbpgascd    char(50) default ' ' not null,
  wbpgbenp    char(7) default ' ' not null,
  wbpgchga    char(7) default ' ' not null,
  wbpgitmn    char(5) default ' ' not null,
  wbpgnmpt    char(2) default ' ' not null,
  wbpgcode    char(4) default ' ' not null,
  wbpgtext    char(500) default ' ' not null,
  wbpgmsid    char(36) default ' ' not null,
  wbpgspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcga1 on webpcgaf
(
wbpgclid,
wbpgtrid,
wbpgcntr,
wbpgscnt
);
create unique index webpcga2 on webpcgaf
(
wbpgtrid,
wbpgclid,
wbpgcntr,
wbpgscnt
);
create unique index webpcga3 on webpcgaf
(
wbpgmsid,
wbpgclid,
wbpgcntr,
wbpgscnt
);
revoke all on webpcgaf from public ; 
grant select on webpcgaf to public ; 
