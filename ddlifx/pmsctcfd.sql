create table pmsctcaf
(
pmctadmn    char(8),
pmcturno    char(8),
pmctvdat    char(8),
pmctsnam    char(30),
pmctsad1    char(35),
pmctsad2    char(35),
pmctsad3    char(35),
pmctsad4    char(35),
pmctspco    char(8),
pmctsphn    char(12),
pmctcont    char(30),
pmctrefn    char(20),
pmctspar    char(80),
lf          char(1)
);
create unique index pmsctca1 on pmsctcaf
(
pmctadmn
);
revoke all on pmsctcaf from public ; 
grant select on pmsctcaf to public ; 
