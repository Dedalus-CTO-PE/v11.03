create table webrdtaf
(
wbrdgrid    char(5),
wbrdprid    char(8),
wbrdtmid    char(3),
wbrdspar    char(80),
lf          char(1)
);
create unique index webrdta1 on webrdtaf
(
wbrdgrid,
wbrdprid,
wbrdtmid
);
create unique index webrdta2 on webrdtaf
(
wbrdprid,
wbrdtmid,
wbrdgrid
);
revoke all on webrdtaf from public ; 
grant select on webrdtaf to public ; 
