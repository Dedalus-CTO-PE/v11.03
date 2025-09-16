create table webplnaf
(
wbplurn     char(8),
wbpluni     char(8),
wbplvis     char(8),
wbpldoc     char(6),
wbpldat     char(8),
wbpltim     char(5),
wbpluid     char(4),
wbpllty     char(3),
wbplurl     char(80),
wbplicn     char(80),
wbplde1     char(80),
wbplde2     char(80),
wbplde3     char(80),
wbplur1     char(30),
wbplur2     char(30),
wbplud1     char(8),
wbplud2     char(8),
wbpluy1     char(1),
wbpluy2     char(1),
wbplwrd     char(3),
wbplspa     char(77),
lf          char(1)
);
create unique index webplna1 on webplnaf
(
wbplurn,
wbpluni
);
create unique index webplna2 on webplnaf
(
wbplurn,
wbpldat,
wbpltim,
wbpluni
);
create unique index webplna3 on webplnaf
(
wbpldoc,
wbpldat,
wbpltim,
wbplurn,
wbpluni
);
create unique index webplna4 on webplnaf
(
wbplwrd,
wbpldat,
wbpltim,
wbplurn,
wbpluni
);
revoke all on webplnaf from public ; 
grant select on webplnaf to public ; 
