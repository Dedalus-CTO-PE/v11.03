create table websopaf
(
wbsoprg     char(8),
wbsoopt     char(2),
wbsodes     char(35),
wbsour1     char(30),
wbsour2     char(30),
wbsoud1     char(8),
wbsoud2     char(8),
wbsouy1     char(1),
wbsouy2     char(1),
wbsospa     char(20),
lf          char(1)
);
create unique index websopa1 on websopaf
(
wbsoprg,
wbsoopt
);
revoke all on websopaf from public ; 
grant select on websopaf to public ; 
