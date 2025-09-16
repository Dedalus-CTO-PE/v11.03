create table pathdfaf
(
pthdclmn    char(3),
pthdhfnd    char(6),
pthdtabt    char(3),
pthdcasm    char(9),
dpthdeda    char(4),
pthddtyp    decimal(1,0),
pthddes1    char(30),
pthddes2    char(35),
pthddreb    decimal(14,2),
pthddpat    decimal(14,2),
pthdcnid    char(6),
pthdspar    char(14),
lf          char(1)
);
create unique index pathdfa1 on pathdfaf
(
pthdcnid,
pthdclmn,
pthdhfnd,
pthdtabt,
pthdcasm,
dpthdeda
);
revoke all on pathdfaf from public ; 
grant select on pathdfaf to public ; 
