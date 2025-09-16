create table mrtmovaf
(
mrmoreas    char(4),
mrmodesc    char(30),
mrmoperd    decimal(3,0),
mrmotype    char(1),
mrmoindc    char(1),
mrmostat    decimal(1,0),
mrmousag    decimal(1,0),
mrmospar    char(20),
lf          char(1)
);
create unique index mrtmova1 on mrtmovaf
(
mrmoreas
);
revoke all on mrtmovaf from public ; 
grant select on mrtmovaf to public ; 
