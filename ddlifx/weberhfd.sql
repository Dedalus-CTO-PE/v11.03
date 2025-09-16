create table weberhaf
(
  wbeihosp    char(3) default ' ' not null,
  wbeiftid    char(24) default ' ' not null,
  wbeiradv    char(30) default ' ' not null,
  wbeipnum    char(4) default ' ' not null,
  wbeiptot    char(4) default ' ' not null,
  wbeidate    char(8) default ' ' not null,
  wbeiname    char(40) default ' ' not null,
  wbeiplid    char(8) default ' ' not null,
  wbeibnum    char(9) default ' ' not null,
  wbeibnam    char(30) default ' ' not null,
  wbeibbsb    char(6) default ' ' not null,
  wbeipref    char(30) default ' ' not null,
  wbeidamt    char(9) default ' ' not null,
  wbeistat    char(1) default ' ' not null,
  wbeimsid    char(36) default ' ' not null,
  wbeirsta    char(40) default ' ' not null,
  wbeispar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index weberha1 on weberhaf
(
wbeihosp,
wbeiftid,
wbeiradv,
wbeipnum
);
create unique index weberha2 on weberhaf
(
wbeihosp,
wbeidate,
wbeiftid,
wbeiradv,
wbeipnum
);
create unique index weberha3 on weberhaf
(
wbeihosp,
wbeistat,
wbeidate,
wbeiftid,
wbeiradv,
wbeipnum
);
create unique index weberha4 on weberhaf
(
wbeiftid,
wbeiradv,
wbeipnum,
wbeihosp
);
revoke all on weberhaf from public ; 
grant select on weberhaf to public ; 
