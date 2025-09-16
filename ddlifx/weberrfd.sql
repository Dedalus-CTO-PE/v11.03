create table weberraf
(
wberpid     char(8),
wberdat     char(8),
wbertim     char(8),
wberuid     char(10),
wberrep     char(2),
wbertmp     char(3),
wberurn     char(8),
wbervis     char(8),
wbercnt     char(3),
wbererr     char(40),
wberspa     char(78),
lf          char(1)
);
create unique index weberra1 on weberraf
(
wberpid,
wberdat,
wbertim
);
create unique index weberra2 on weberraf
(
wberdat,
wbertim,
wberpid
);
create unique index weberra3 on weberraf
(
wberuid,
wberdat,
wbertim,
wberpid
);
revoke all on weberraf from public ; 
grant select on weberraf to public ; 
