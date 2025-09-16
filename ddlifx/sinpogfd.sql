create table sinpogaf
(
sipgpon     char(7),
sipglin     char(3),
sipgcom     char(78),
sipgspa     char(10),
lf          char(1)
);
create unique index sinpoga1 on sinpogaf
(
sipgpon,
sipglin
);
revoke all on sinpogaf from public ; 
grant select on sinpogaf to public ; 
