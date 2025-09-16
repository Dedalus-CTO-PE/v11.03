create table watsusaf
(
wtsuurno    char(8),
wtsucode    char(9),
dwtsucnt    char(2),
dwtsuscn    char(2),
wtsufdat    char(8),
wtsutdat    char(8),
wtsureas    char(3),
wtsulsts    char(3),
wtsuuser    char(10),
wtsuauto    char(1),
wtsuspar    char(5),
lf          char(1)
);
create unique index watsusa1 on watsusaf
(
wtsuurno,
wtsucode,
dwtsucnt,
dwtsuscn
);
create unique index watsusa2 on watsusaf
(
wtsuurno,
wtsucode,
dwtsucnt,
wtsufdat,
dwtsuscn
);
revoke all on watsusaf from public ; 
grant select on watsusaf to public ; 
