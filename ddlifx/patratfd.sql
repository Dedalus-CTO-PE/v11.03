create table patratef
(
rcompn      char(3),
rclass      char(3),
rtype       char(3),
rcstat      char(3),
rtcpday     decimal(14,2),
rcpdes      char(20),
rtceday     decimal(14,2),
rcedes      char(20),
rhb21       decimal(1,0),
rcspare     char(13),
lf          char(1)
);
create unique index patrate1 on patratef
(
rcompn,
rclass,
rtype,
rcstat
);
revoke all on patratef from public ; 
grant select on patratef to public ; 
