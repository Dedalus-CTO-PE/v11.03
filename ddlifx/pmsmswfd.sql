create table pmsmswaf
(
pmmwhosp    char(3),
pmmwward    char(3),
pmmwbedc    char(3),
pmmwwcls    char(3),
pmmwordp    char(2),
pmmwwebc    char(10),
pmmwdatc    char(8),
pmmwtimc    char(8),
pmmwwebu    char(10),
pmmwdatu    char(8),
pmmwtimu    char(8),
pmmwspar    char(30),
lf          char(1)
);
create unique index pmsmswa1 on pmsmswaf
(
pmmwhosp,
pmmwward,
pmmwbedc,
pmmwwcls
);
create unique index pmsmswa2 on pmsmswaf
(
pmmwhosp,
pmmwward,
pmmwbedc,
pmmwordp,
pmmwwcls
);
revoke all on pmsmswaf from public ; 
grant select on pmsmswaf to public ; 
