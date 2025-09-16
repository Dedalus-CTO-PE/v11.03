create table sinpodaf
(
sipdpon     char(7),
sipditm     char(3),
sipdlin     char(3),
sipdcom     char(60),
sipdspa     char(20),
lf          char(1)
);
create unique index sinpoda1 on sinpodaf
(
sipdpon,
sipditm,
sipdlin
);
revoke all on sinpodaf from public ; 
grant select on sinpodaf to public ; 
