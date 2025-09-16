create table webmndaf
(
wbmdusid    char(10),
wbmdmenu    char(8),
wbmdactv    char(1),
wbmdspar    char(80),
lf          char(1)
);
create unique index webmnda1 on webmndaf
(
wbmdusid,
wbmdmenu
);
revoke all on webmndaf from public ; 
grant select on webmndaf to public ; 
