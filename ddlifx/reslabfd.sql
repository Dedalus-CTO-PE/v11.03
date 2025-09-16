create table reslabaf
(
relblcd     char(3),
relbdes     char(40),
relblrn     decimal(4,0),
relbeml     char(50),
relbhem     char(50),
relbmid     decimal(8,0),
relbsap     char(10),
relbspa     char(20),
lf          char(1)
);
create unique index reslaba1 on reslabaf
(
relblcd
);
revoke all on reslabaf from public ; 
grant select on reslabaf to public ; 
