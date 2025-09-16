create table nhimccaf
(
nhmccsys    char(2),
nhmccod     char(6),
nhmcdes     char(50),
nhmcspa     char(30),
lf          char(1)
);
create unique index nhimcca1 on nhimccaf
(
nhmccsys,
nhmccod
);
revoke all on nhimccaf from public ; 
grant select on nhimccaf to public ; 
