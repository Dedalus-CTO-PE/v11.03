create table pmsdltaf
(
pmdsseli    char(4),
pmdsdesc    char(35),
pmdshcpf    char(10),
pmdshcpt    char(10),
pmdspsfr    char(3),
pmdspsto    char(3),
pmdsasfr    char(3),
pmdsasto    char(3),
pmdshosp    char(3),
pmdspref    char(3),
pmdsfadf    char(8),
pmdsfadt    char(8),
pmdsladf    char(8),
pmdsladt    char(8),
pmdshcst    char(2),
pmdsatyp    char(3),
pmdsyacf    char(2),
pmdsyact    char(2),
pmdsinsc    char(6),
pmdsidff    char(8),
pmdsidft    char(8),
pmdsidtf    char(8),
pmdsidtt    char(8),
pmdsactv    char(1),
pmdsspar    char(50),
lf          char(1)
);
create unique index pmsdlta1 on pmsdltaf
(
pmdsseli
);
revoke all on pmsdltaf from public ; 
grant select on pmsdltaf to public ; 
