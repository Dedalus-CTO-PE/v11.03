create table watcataf
(
wtcaedat    char(8),
wtcaurno    char(8),
wtcaproc    char(9),
dwtcapcn    char(2),
wtcacatf    char(2),
wtcacodf    char(3),
wtcacodt    char(3),
wtcaadte    char(8),
wtcaatim    char(5),
wtcawebi    char(10),
wtcaspar    char(1),
lf          char(1)
);
create unique index watcata1 on watcataf
(
wtcaedat,
wtcacatf,
wtcaurno,
wtcaproc,
dwtcapcn
);
create unique index watcata2 on watcataf
(
wtcaurno,
wtcaproc,
dwtcapcn,
wtcacatf,
wtcaedat
);
revoke all on watcataf from public ; 
grant select on watcataf to public ; 
