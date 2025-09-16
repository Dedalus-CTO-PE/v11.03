create table sinscfaf
(
sisfcon     char(10),
sisfsup     char(5),
sisfcat     char(7),
sisfsut     char(15),
sisfaqt     decimal(14,2),
sisfapc     decimal(14,2),
sisfeqt     decimal(14,2),
sisfect     decimal(14,2),
sisfur1     char(15),
sisfur2     char(15),
sisfud1     char(8),
sisfud2     char(8),
sisfuy1     char(1),
sisfuy2     char(1),
sisfspa     char(20),
lf          char(1)
);
create unique index sinscfa1 on sinscfaf
(
sisfcon,
sisfsup,
sisfcat,
sisfsut
);
revoke all on sinscfaf from public ; 
grant select on sinscfaf to public ; 
