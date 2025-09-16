create table webmneaf
(
wbmeusid    char(10),
wbmeserv    char(8),
wbmeoptn    char(2),
wbmebser    char(3),
wbmemenu    char(8),
wbmemgrp    char(3),
wbmemitm    char(3),
wbmespar    char(80),
lf          char(1)
);
create unique index webmnea1 on webmneaf
(
wbmeusid,
wbmeserv,
wbmeoptn,
wbmebser
);
create unique index webmnea2 on webmneaf
(
wbmemenu,
wbmemgrp,
wbmemitm,
wbmeusid
);
revoke all on webmneaf from public ; 
grant select on webmneaf to public ; 
