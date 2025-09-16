create table pateoraf
(
ptertype    char(1),
ptercode    char(6),
ptername    char(30),
pteradd1    char(35),
pteradd2    char(35),
pteradd3    char(35),
pteradd4    char(35),
pterpost    char(8),
ptertelp    char(20),
ptercont    char(30),
pterstat    char(1),
ptersect    char(3),
pterregn    char(3),
pterutyp    char(3),
pterspar    char(21),
lf          char(1)
);
create unique index pateora1 on pateoraf
(
ptertype,
ptercode
);
create unique index pateora2 on pateoraf
(
ptercode,
ptertype
);
revoke all on pateoraf from public ; 
grant select on pateoraf to public ; 
