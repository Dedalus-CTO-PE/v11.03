create table privafdf
(
prvainvn    char(8),
dprvaunq    char(8),
prvaclam    char(20),
prvaspar    char(40),
lf          char(1)
);
create unique index privafd1 on privafdf
(
prvainvn,
dprvaunq
);
create unique index privafd2 on privafdf
(
dprvaunq,
prvainvn
);
revoke all on privafdf from public ; 
grant select on privafdf to public ; 
