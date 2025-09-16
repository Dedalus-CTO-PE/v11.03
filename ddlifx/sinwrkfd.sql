create table sinwrkaf
(
siwkwar     char(5),
siwkrack    char(8),
siwkcat     char(7),
siwkcnt     decimal(14,2),
siwksoh     decimal(14,2),
siwkspa     char(20),
lf          char(1)
);
create unique index sinwrka1 on sinwrkaf
(
siwkwar,
siwkrack,
siwkcat
);
create unique index sinwrka2 on sinwrkaf
(
siwkwar,
siwkcat,
siwkrack
);
revoke all on sinwrkaf from public ; 
grant select on sinwrkaf to public ; 
