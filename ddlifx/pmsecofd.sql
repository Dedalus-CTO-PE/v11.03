create table pmsecoaf
(
pmeohfnd    char(6),
pmeodflg    char(1),
pmeotrid    char(24),
pmeoinvn    char(8),
pmeobatn    char(8),
pmeoctyp    char(1),
pmeocdat    char(8),
pmeouser    char(10),
pmeospar    char(20),
lf          char(1)
);
create unique index pmsecoa1 on pmsecoaf
(
pmeohfnd,
pmeodflg,
pmeotrid
);
create unique index pmsecoa2 on pmsecoaf
(
pmeocdat,
pmeodflg,
pmeotrid,
pmeohfnd
);
revoke all on pmsecoaf from public ; 
grant select on pmsecoaf to public ; 
