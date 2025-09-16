create table sincifaf
(
siifcat     char(7),
siifali     char(60),
siiftyp     char(1),
siifaty     decimal(1,0),
siifspa     char(10),
lf          char(1)
);
create unique index sincifa1 on sincifaf
(
siifali,
siifcat
);
create unique index sincifa2 on sincifaf
(
siifcat,
siifali
);
revoke all on sincifaf from public ; 
grant select on sincifaf to public ; 
