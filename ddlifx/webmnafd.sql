create table webmnaaf
(
wbmamenu    char(8),
wbmadesc    char(35),
wbmaipvt    char(1),
wbmalser    char(8),
wbmalopt    char(2),
wbmalbsr    char(3),
wbmauopt    char(127),
wbmasurl    char(127),
wbmamaxc    char(50),
wbmamaxl    char(50),
wbmaspar    char(80),
lf          char(1)
);
create unique index webmnaa1 on webmnaaf
(
wbmamenu
);
revoke all on webmnaaf from public ; 
grant select on webmnaaf to public ; 
