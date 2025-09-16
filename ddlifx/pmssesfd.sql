create table pmssesaf
(
pmesarid    char(20),
pmesrptc    char(3),
pmesscod    char(11),
pmessrvc    char(3),
pmessctc    char(1),
pmessvid    char(4),
pmescamt    char(9),
pmessdte    char(8),
pmesfbam    char(9),
pmesitem    char(5),
pmesmbam    char(9),
pmesmexc    char(3),
pmessfac    char(1),
pmessfee    char(9),
pmesspar    char(30),
lf          char(1)
);
create unique index pmssesa1 on pmssesaf
(
pmesarid,
pmesrptc,
pmesscod,
pmessrvc
);
revoke all on pmssesaf from public ; 
grant select on pmssesaf to public ; 
