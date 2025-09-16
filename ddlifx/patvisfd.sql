create table patvisaf
(
pviurno     char(8),
pvidate     char(8),
dpvibill    char(8),
pvitype     decimal(1,0),
pvidoct     char(6),
pvistat     decimal(1,0),
pvitran     decimal(6,0),
pvilock     char(2),
pvisite     char(6),
pviresi     char(3),
pviunqe     char(1),
pvisyst     char(2),
ptvitype    char(2),
pvispar     char(9),
lf          char(1)
);
create unique index patvisa1 on patvisaf
(
dpvibill
);
create unique index patvisa2 on patvisaf
(
pviurno,
pvidate,
dpvibill
);
create unique index patvisa3 on patvisaf
(
pvidoct,
pvidate,
dpvibill
);
create unique index patvisa4 on patvisaf
(
pviurno,
ptvitype,
pvidate,
dpvibill
);
revoke all on patvisaf from public ; 
grant select on patvisaf to public ; 
