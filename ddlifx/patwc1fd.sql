create table patwc1af
(
dwcadmno    char(8),
wcename     char(30),
wceadd1     char(35),
wceadd2     char(35),
wceadd3     char(35),
wceadd4     char(35),
wcepost     char(8),
wcetele     char(20),
wcacdat     char(8),
wcaccpt     decimal(1,0),
wcicode     char(6),
wcclmno     char(20),
wccomn1     char(40),
wccomn2     char(40),
ptwcurno    char(8),
ptwcvdat    char(8),
ptwcspar    char(6),
lf          char(1)
);
create unique index patwc1a1 on patwc1af
(
dwcadmno
);
create unique index patwc1a2 on patwc1af
(
ptwcurno,
dwcadmno
);
create unique index patwc1a3 on patwc1af
(
wcclmno,
ptwcurno,
dwcadmno,
ptwcvdat
);
revoke all on patwc1af from public ; 
grant select on patwc1af to public ; 
