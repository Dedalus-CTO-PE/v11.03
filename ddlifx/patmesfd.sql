create table patmesgf
(
pmcode      char(3),
pmline1     char(65),
pmline2     char(65),
pmspare     char(10),
lf          char(1)
);
create unique index patmesg1 on patmesgf
(
pmcode
);
revoke all on patmesgf from public ; 
grant select on patmesgf to public ; 
