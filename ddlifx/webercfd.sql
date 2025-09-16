create table webercaf
(
  wbecarid    char(20) default ' ' not null,
  wbecrptc    char(3) default ' ' not null,
  wbectype    char(3) default ' ' not null,
  wbecline    char(3) default ' ' not null,
  wbecdata    char(1000) default ' ' not null,
  wbecudat    char(8) default ' ' not null,
  wbecutim    char(8) default ' ' not null,
  wbectrid    char(24) default ' ' not null,
  wbecmsid    char(36) default ' ' not null,
  wbecspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index weberca1 on webercaf
(
wbecarid,
wbecrptc,
wbectype,
wbecline
);
create unique index weberca2 on webercaf
(
wbectrid,
wbecarid,
wbecrptc,
wbectype,
wbecline
);
create unique index weberca3 on webercaf
(
wbecmsid,
wbecarid,
wbecrptc,
wbectype,
wbecline
);
revoke all on webercaf from public ; 
grant select on webercaf to public ; 
