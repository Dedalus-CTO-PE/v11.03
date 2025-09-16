create table pritdtaf
(
prtdtmid    char(4),
prtdtype    char(1),
prtdseqn    char(3),
prtdcode    char(9),
prtdsubi    char(3),
prtdquan    decimal(2,0),
prtdspar    char(40),
lf          char(1)
);
create unique index pritdta1 on pritdtaf
(
prtdtmid,
prtdtype,
prtdseqn
);
revoke all on pritdtaf from public ; 
grant select on pritdtaf to public ; 
