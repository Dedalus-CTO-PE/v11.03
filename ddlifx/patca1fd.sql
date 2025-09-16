create table patca1af
(
ptcaadmn    char(8),
ptcaadd1    char(35),
ptcaadd2    char(35),
ptcasub     char(35),
ptcaadd4    char(35),
ptcapcod    char(8),
ptcalga     char(4),
ptcahph     char(20),
ptcabph     char(20),
ptcaspar    char(94),
lf          char(1)
);
create unique index patca1a1 on patca1af
(
ptcaadmn
);
revoke all on patca1af from public ; 
grant select on patca1af to public ; 
