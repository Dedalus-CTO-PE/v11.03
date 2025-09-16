create table patldfaf
(
ptldclmn    char(3),
ptldhfnd    char(6),
ptldtabt    char(3),
ptldcasm    char(9),
dptldeda    char(4),
ptlddes1    char(30),
ptlddes2    char(35),
ptlddreb    decimal(14,2),
ptlddpat    decimal(14,2),
ptldcnid    char(6),
ptldspar    char(15),
lf          char(1)
);
create unique index patldfa1 on patldfaf
(
ptldcnid,
ptldclmn,
ptldhfnd,
ptldtabt,
ptldcasm,
dptldeda
);
revoke all on patldfaf from public ; 
grant select on patldfaf to public ; 
