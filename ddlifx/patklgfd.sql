create table patklgaf
(
ptlgcode    char(4),
ptlgkwrd    char(15),
ptlgspar    char(20),
lf          char(1)
);
create unique index patklga1 on patklgaf
(
ptlgcode,
ptlgkwrd
);
create unique index patklga2 on patklgaf
(
ptlgkwrd,
ptlgcode
);
revoke all on patklgaf from public ; 
grant select on patklgaf to public ; 
