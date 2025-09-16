create table patlsdaf
(
ptlsclmn    char(3),
ptlshfnd    char(6),
ptlstabt    char(3),
ptlscasm    char(9),
ptlsdes1    char(30),
ptlsdes2    char(35),
ptlslreb    decimal(14,2),
ptlslpat    decimal(14,2),
ptlsinvr    decimal(1,0),
ptlsinvi    decimal(1,0),
ptlsninv    decimal(1,0),
ptlscnid    char(6),
ptlsspar    char(12),
lf          char(1)
);
create unique index patlsda1 on patlsdaf
(
ptlscnid,
ptlsclmn,
ptlshfnd,
ptlstabt,
ptlscasm
);
create unique index patlsda2 on patlsdaf
(
ptlsclmn,
ptlshfnd,
ptlstabt,
ptlscasm,
ptlscnid
);
revoke all on patlsdaf from public ; 
grant select on patlsdaf to public ; 
