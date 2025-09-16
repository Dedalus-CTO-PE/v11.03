create table webpcfaf
(
  wbpfclid    char(22) default ' ' not null,
  wbpftrid    char(24) default ' ' not null,
  wbpfcntr    char(3) default ' ' not null,
  wbpfevdt    char(8) default ' ' not null,
  wbpfmeid    char(2) default ' ' not null,
  wbpfmsid    char(36) default ' ' not null,
  wbpfspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webpcfa1 on webpcfaf
(
wbpfclid,
wbpftrid,
wbpfcntr
);
create unique index webpcfa2 on webpcfaf
(
wbpftrid,
wbpfclid,
wbpfcntr
);
revoke all on webpcfaf from public ; 
grant select on webpcfaf to public ; 
