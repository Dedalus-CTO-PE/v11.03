create table watesmaf
(
wtemedat    char(8),
wtemcurn    char(8),
wtemrurn    char(8),
wtemspar    char(50),
lf          char(1)
);
create unique index watesma1 on watesmaf
(
wtemcurn,
wtemrurn,
wtemedat
);
create unique index watesma2 on watesmaf
(
wtemedat,
wtemcurn,
wtemrurn
);
revoke all on watesmaf from public ; 
grant select on watesmaf to public ; 
