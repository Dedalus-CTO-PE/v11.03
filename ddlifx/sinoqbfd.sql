create table sinoqbaf
(
siqbcst     char(5),
siqbrid     char(8),
siqblin     char(3),
siqbcom     char(60),
siqbspa     char(20),
lf          char(1)
);
create unique index sinoqba1 on sinoqbaf
(
siqbcst,
siqbrid,
siqblin
);
revoke all on sinoqbaf from public ; 
grant select on sinoqbaf to public ; 
