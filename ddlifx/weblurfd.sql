create table webluraf
(
wblruid     char(10),
wblrur01    char(8),
wblrvs01    char(8),
wblrur02    char(8),
wblrvs02    char(8),
wblrur03    char(8),
wblrvs03    char(8),
wblrur04    char(8),
wblrvs04    char(8),
wblrur05    char(8),
wblrvs05    char(8),
wblrur06    char(8),
wblrvs06    char(8),
wblrur07    char(8),
wblrvs07    char(8),
wblrur08    char(8),
wblrvs08    char(8),
wblrur09    char(8),
wblrvs09    char(8),
wblrur10    char(8),
wblrvs10    char(8),
wblrur11    char(8),
wblrvs11    char(8),
wblrur12    char(8),
wblrvs12    char(8),
wblrur13    char(8),
wblrvs13    char(8),
wblrur14    char(8),
wblrvs14    char(8),
wblrur15    char(8),
wblrvs15    char(8),
wblrur16    char(8),
wblrvs16    char(8),
wblrur17    char(8),
wblrvs17    char(8),
wblrur18    char(8),
wblrvs18    char(8),
wblrur19    char(8),
wblrvs19    char(8),
wblrur20    char(8),
wblrvs20    char(8),
wblrspar    char(50),
lf          char(1)
);
create unique index weblura1 on webluraf
(
wblruid
);
revoke all on webluraf from public ; 
grant select on webluraf to public ; 
