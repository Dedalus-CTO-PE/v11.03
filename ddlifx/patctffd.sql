create table patctfaf
(
ptctclmn    char(3),
ptcthfnd    char(6),
ptcttabt    char(3),
ptctcasm    char(9),
ptctmbsb    char(3),
dptctdca    char(1),
dptctitm    char(2),
ptctdreb    decimal(14,2),
ptctdpat    decimal(14,2),
ptctcnid    char(6),
ptctspar    char(11),
lf          char(1)
);
create unique index patctfa1 on patctfaf
(
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctcasm,
ptctmbsb,
dptctdca,
dptctitm
);
create unique index patctfa2 on patctfaf
(
ptctcnid,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
dptctitm
);
create unique index patctfa3 on patctfaf
(
dptctitm,
ptctclmn,
ptcthfnd,
ptcttabt,
ptctmbsb,
ptctcasm,
dptctdca,
ptctcnid
);
revoke all on patctfaf from public ; 
grant select on patctfaf to public ; 
