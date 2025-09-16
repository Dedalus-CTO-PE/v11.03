create table patlgaaf
(
lgacode     char(4),
lgadesc     char(20),
lgaspar     char(7),
lf          char(1)
);
create unique index patlgaa1 on patlgaaf
(
lgacode
);
revoke all on patlgaaf from public ; 
grant select on patlgaaf to public ; 
