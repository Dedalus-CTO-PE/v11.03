create table pmspthaf
(
pmptexdt    char(8),
pmptextm    char(8),
pmptflnm    char(25),
pmptrcct    decimal(5,0),
pmptspar    char(10),
lf          char(1)
);
create unique index pmsptha1 on pmspthaf
(
pmptexdt,
pmptextm
);
revoke all on pmspthaf from public ; 
grant select on pmspthaf to public ; 
