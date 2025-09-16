create table oprcouaf
(
opcodate    char(6),
opcodoct    char(6),
opcotype    char(1),
opcootyp    char(3),
opcotper    char(3),
dopcoaty    char(1),
dopcoown    char(1),
opconcas    decimal(6,0),
opconopr    decimal(6,0),
opcotime    decimal(6,0),
opcospar    char(11),
lf          char(1)
);
create unique index oprcoua1 on oprcouaf
(
opcodate,
opcodoct,
opcotype,
opcootyp,
opcotper,
dopcoaty,
dopcoown
);
revoke all on oprcouaf from public ; 
grant select on oprcouaf to public ; 
