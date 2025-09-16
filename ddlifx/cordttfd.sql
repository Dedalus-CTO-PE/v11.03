create table cordttaf
(
codtctyp    char(5),
codtflno    char(5),
codtdseq    char(3),
codthead    char(25),
codtcnvt    char(1),
codtspar    char(80),
lf          char(1)
);
create unique index cordtta1 on cordttaf
(
codtctyp,
codtflno
);
create unique index cordtta2 on cordttaf
(
codtctyp,
codtdseq,
codtflno
);
revoke all on cordttaf from public ; 
grant select on cordttaf to public ; 
