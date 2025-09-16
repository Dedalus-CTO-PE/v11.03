create table oprscraf
(
opsckey     char(8),
dopscfld    char(2),
opscdrow    decimal(2,0),
opscdcol    decimal(2,0),
opsckrow    decimal(2,0),
opsckcol    decimal(2,0),
opscvarn    decimal(2,0),
opscdesc    char(20),
opscdsiz    decimal(2,0),
opscsize    decimal(2,0),
opscdsrw    decimal(2,0),
opscdscl    decimal(2,0),
opscmand    decimal(1,0),
opscspar    char(28),
lf          char(1)
);
create unique index oprscra1 on oprscraf
(
opsckey,
dopscfld
);
revoke all on oprscraf from public ; 
grant select on oprscraf to public ; 
