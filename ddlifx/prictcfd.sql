create table prictcaf
(
prctinvn    char(8),
dprctuni    char(8),
prctsnam    char(30),
prctsad1    char(35),
prctsad2    char(35),
prctsad3    char(35),
prctsad4    char(35),
prctspco    char(8),
prctsphn    char(12),
prctcont    char(30),
prctrefn    char(20),
prctspar    char(20),
lf          char(1)
);
create unique index prictca1 on prictcaf
(
prctinvn,
dprctuni
);
create unique index prictca2 on prictcaf
(
dprctuni,
prctinvn
);
revoke all on prictcaf from public ; 
grant select on prictcaf to public ; 
