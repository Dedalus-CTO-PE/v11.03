create table sinaudga
(
sigaaudd    char(8),
sigaaudt    char(8),
sigaaudp    char(2),
sigaaudr    char(1),
sigaauds    decimal(1,0),
sigaaudo    char(4),
sigacod     char(6),
sigades     char(40),
sigagli     char(12),
sigaudd1    char(8),
sigaudd2    char(8),
sigaudy1    char(1),
sigaudy2    char(1),
sigaudr1    char(15),
sigaudr2    char(15),
sigaspa     char(9),
lf          char(1)
);
create index sinaudga on sinaudga
(
sigaaudd,
sigaaudt,
sigaaudp,
sigaaudr
);
revoke all on sinaudga from public ; 
grant select on sinaudga to public ; 
create table sincgaaf
(
sigacod     char(6),
sigades     char(40),
sigagli     char(12),
sigaudd1    char(8),
sigaudd2    char(8),
sigaudy1    char(1),
sigaudy2    char(1),
sigaudr1    char(15),
sigaudr2    char(15),
sigaspa     char(9),
lf          char(1)
);
create unique index sincgaa1 on sincgaaf
(
sigacod
);
create unique index sincgaa2 on sincgaaf
(
sigades,
sigacod
);
revoke all on sincgaaf from public ; 
grant select on sincgaaf to public ; 
