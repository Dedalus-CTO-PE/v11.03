create table obstypaf
(
obtytype    char(3),
obtydesc    char(25),
obtytmad    char(3),
obtytmup    char(3),
obtyactv    char(1),
obtyspar    char(80),
lf          char(1)
);
create unique index obstypa1 on obstypaf
(
obtytype
);
revoke all on obstypaf from public ; 
grant select on obstypaf to public ; 
