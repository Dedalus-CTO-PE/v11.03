create table oprcosaf
(
opcpdate    char(6),
opcpdoct    char(6),
opcpoper    char(9),
opcpttim    decimal(6,0),
opcpltim    decimal(6,0),
opcphtim    decimal(6,0),
opcpncas    decimal(6,0),
opcpnopr    decimal(6,0),
opcpspar    char(13),
lf          char(1)
);
create unique index oprcosa1 on oprcosaf
(
opcpdate,
opcpdoct,
opcpoper
);
revoke all on oprcosaf from public ; 
grant select on oprcosaf to public ; 
