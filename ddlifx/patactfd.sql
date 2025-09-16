create table patactaf
(
ptacclss    char(3),
ptacaccm    char(1),
ptaccare    char(2),
ptacmedi    decimal(2,0),
ptacspar    char(11),
lf          char(1)
);
create unique index patacta1 on patactaf
(
ptacclss,
ptacaccm,
ptaccare
);
revoke all on patactaf from public ; 
grant select on patactaf to public ; 
