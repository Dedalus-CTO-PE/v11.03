create table prigrpaf
(
dprgpflg    char(2),
prgpitm1    char(9),
prgpsub1    char(3),
prgpdate    char(8),
prgpitm2    char(9),
prgpsub2    char(3),
prgpspar    char(4),
lf          char(1)
);
create unique index prigrpa1 on prigrpaf
(
dprgpflg,
prgpitm1,
prgpsub1,
prgpdate,
prgpitm2,
prgpsub2
);
revoke all on prigrpaf from public ; 
grant select on prigrpaf to public ; 
