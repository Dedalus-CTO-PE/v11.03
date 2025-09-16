create table obspalaf
(
obpaurn     char(8),
obpauni     char(4),
obpadte     char(8),
obpausr     char(10),
obpaalt     char(10),
obpaalv     char(1),
obpaslv     char(2),
obpaiac     char(1),
obpaidt     char(8),
obpaius     char(10),
obpacm1     char(50),
obpacm2     char(50),
obpalus     char(10),
obpaldt     char(8),
obpaltm     char(8),
obparf1     char(20),
obparf2     char(20),
obpayn1     char(1),
obpayn2     char(1),
obpaspa     char(1),
lf          char(1)
);
create unique index obspala1 on obspalaf
(
obpaurn,
obpauni
);
create unique index obspala2 on obspalaf
(
obpaurn,
obpaalv,
obpadte,
obpauni
);
revoke all on obspalaf from public ; 
grant select on obspalaf to public ; 
