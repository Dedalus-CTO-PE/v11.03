create table webmesaf
(
wbmsuser    char(10),
wbmsmid     char(3),
wbmsdate    char(8),
wbmstime    char(8),
wbmslin1    char(50),
wbmslin2    char(50),
wbmslin3    char(50),
wbmslin4    char(50),
wbmslin5    char(50),
wbmsexpd    char(8),
wbmsexpt    char(8),
wbmsspar    char(28),
lf          char(1)
);
create unique index webmesa1 on webmesaf
(
wbmsuser,
wbmsmid
);
revoke all on webmesaf from public ; 
grant select on webmesaf to public ; 
