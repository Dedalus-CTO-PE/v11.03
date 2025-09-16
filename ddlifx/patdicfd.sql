create table patdicaf
(
ptdiicd     char(9),
ptdikwd     char(15),
ptdispa     char(10),
lf          char(1)
);
create unique index patdica1 on patdicaf
(
ptdiicd,
ptdikwd
);
create unique index patdica2 on patdicaf
(
ptdikwd,
ptdiicd
);
revoke all on patdicaf from public ; 
grant select on patdicaf to public ; 
