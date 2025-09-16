create table webimeaf
(
  wbiefbid    char(3) default ' ' not null,
  wbiearid    char(20) default ' ' not null,
  wbieclid    char(6) default ' ' not null,
  wbierptc    char(3) default ' ' not null,
  wbiemecn    char(2) default ' ' not null,
  wbiemeid    char(2) default ' ' not null,
  wbiecfcd    char(1) default ' ' not null,
  wbiecpsc    char(4) default ' ' not null,
  wbiecpst    char(80) default ' ' not null,
  wbiecpmn    char(10) default ' ' not null,
  wbiecprn    char(1) default ' ' not null,
  wbiecpfn    char(40) default ' ' not null,
  wbiecpgn    char(40) default ' ' not null,
  wbietrid    char(24) default ' ' not null,
  wbiemsid    char(36) default ' ' not null,
  wbiespar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webimea1 on webimeaf
(
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn
);
create unique index webimea2 on webimeaf
(
wbietrid,
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn
);
create unique index webimea3 on webimeaf
(
wbiemsid,
wbiefbid,
wbiearid,
wbieclid,
wbierptc,
wbiemecn
);
revoke all on webimeaf from public ; 
grant select on webimeaf to public ; 
