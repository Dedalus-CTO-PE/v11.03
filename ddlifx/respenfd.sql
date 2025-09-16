create table respenaf
(
repekey     char(32),
repeeml     char(50),
repeall     decimal(1,0),
repeabn     decimal(1,0),
repeurg     decimal(1,0),
repespa     char(50),
lf          char(1)
);
create unique index respena1 on respenaf
(
repekey
);
revoke all on respenaf from public ; 
grant select on respenaf to public ; 
